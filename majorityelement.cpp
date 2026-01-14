#include<bits/stdc++.h>
using namespace std;
class solution{
public:
//OPTIMAL APPROACH 
int majority_element(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
       int freq=0,ans=0;
        if(freq==0){
            ans=arr[i];
        }
        if(ans==freq){//same element
            freq++;
        }else{//diffrent element 
            freq--;
       }
       return ans;
    }
    
}
//BETTER APPROACH 
int Majorityelement(vector<int>arr){
map<int,int>mp;
for (int i = 0; i < arr.size(); i++)
{
    mp[arr[i]];
}
for(auto it:mp){
    if(it.second>arr.size()/2){
        return it.first;
    }
}
    
   return -1; 
}
//BRUTE APPROACH 
int majorityelement(vector<int>arr){
    int n=arr.size();
    for (int i = 0; i <n ; i++)
    {
        int count=0;
        for (int  j = 0; j <n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return -1;
}
};
 
int main(){
vector<int>arr={1,2,1,1,1};
solution majority;
int ans=majority.majorityelement(arr);
cout<<"The majority of element greater than n/2 is :"<<ans<<endl;

vector<int>arr2={2,2,1,2,2};
solution major;
int ans2=major.Majorityelement(arr2);
cout<<"The majority of element greater than n/2 is :"<<ans2<<endl;

vector<int>arr3={2,2,1,2,2};
solution maj;
int ans3=maj.majority_element(arr3);
cout<<"The majority of element greater than n/2 is :"<<ans3<<endl;
return 0;
}