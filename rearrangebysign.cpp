#include<bits/stdc++.h>
using namespace std;
 class arrmanipulater{
public:

//WHEN NO OF POSITIVE IS NOT EQUAL TO NO OF NEGATIVE
vector<int>Rearrange_by_sign(vector<int>&arr){
    vector<int>pos,neg;
    //put negative and positive value in diffrent 
    for(int x:arr){
        if(x>=0){
            pos.push_back(x);
        }else{
            neg.push_back(x);
        }
    }
    int index=0;
    int p=0,n=0;//indices
    while (p < pos.size() && n < neg.size())
    {
        arr[index++]=pos[p++];//1st positive is placed 
        arr[index++]=neg[n++];//2nd negative is placed 
    }
    // Step 3: remaining positives
    while (p < pos.size()) {
        arr[index++] = pos[p++];
    }

    // Step 4: remaining negatives
    while (n < neg.size()) {
        arr[index++] = neg[n++];
    }
    return arr;
}
//OPTIMAL APPROACH
vector<int>Rearrangebysign(vector<int>&arr){
    int posindex=0;//first element
    int negindex=1;//second element
    vector<int>ans(arr.size(),0);//same size as array
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<0){//negative
            ans[negindex]=arr[i];
            negindex+=2;//places at alternate
        }else{
            ans[posindex]=arr[i];
            posindex+=2;
        }
    }
    return ans;
}
//BRUTE APPROACH
vector<int> RearrangeBySign(vector<int>&arr){
    vector<int>positive;
    vector<int>negative;
    //first loop to find positive and negative 
    for (int i = 0; i <arr.size(); i++)
    {
        if(arr[i]<0){
            negative.push_back(arr[i]);
        }else{
            positive.push_back(arr[i]);
        }
    }
    //loop to put +ve and -ve numbers
    //Iterations depend on how many elements you place per loop.
    //1 iteration 2 placement 
    for (int i = 0; i < positive.size(); i++) //⭐positive.size() coz we are putting two values in one iteration
    {
        arr[2*i]=positive[i];//if index even
        arr[2*i+1]=negative[i];//if index odd
    }
    return arr; 
}
 };
int main(){
    vector<int> arr{1, 2, -4, -5};
    arrmanipulater obj;

    // Call the function and get result
    vector<int> ans = obj.RearrangeBySign(arr);

    // Print the rearranged array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout<<endl;

    vector<int> arr2 = {1, 2, -4, -5};
    arrmanipulater obje;

    // Call the rearrange function
    vector<int> result = obje.Rearrangebysign(arr2);

    // Print the rearranged array
    for (int num : result) {
        cout << num << " ";
    }
return 0;
}