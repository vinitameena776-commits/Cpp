#include<bits/stdc++.h>
using namespace std;
int maximumConsecutive(vector<int>arr){
    int maxi=0;
    int count=0;
    for (int  i = 0; i < arr.size(); i++)
    {
       if(arr[i]==1){
        count++;
        maxi=max(maxi,count);//👌will take maximum from both
       }else{
        count=0;
       }
    }
    return maxi;
}
int main(){
vector<int>arr={1,1,2,1,1,1,1};
cout<<"The maximum consecutive are:"<<maximumConsecutive(arr);
return 0;
}