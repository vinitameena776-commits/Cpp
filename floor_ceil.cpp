#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int findfloor(vector<int>&nums,int x){
    int n=nums.size();
    int ans=-1;
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(nums[mid]<=x){
            ans=nums[mid];
            low=mid+1;//search right side
        }else{
            high=mid-1;
        }
    }
    return ans;
}
int findceil(vector<int>&nums,int x){
    int n=nums.size();
    int ans=-1;
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(nums[mid]>=x){
            ans=nums[mid];
            high=mid-1;//search left side
        }else{
            low=mid+1;
        }
    }
    return ans;
}
};
int main(){
vector<int>nums={3,5,8,15,19};
Solution find;
int ans1=find.findfloor(nums,6);
int ans2=find.findceil(nums,6);
cout<<"The floor is:"<<ans1<<endl;
cout<<"The ceil is:"<<ans2<<endl;
return 0;
}