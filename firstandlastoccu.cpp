#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int lb(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid] >=target){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int ub(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid] >target){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=lb(nums,target);
        if(first==-1 || nums[first]!=target) return {-1,-1};
        int last=ub(nums,target);
        if(last==-1) last=n;
        return {first,last-1};
    }
};
int main(){
    vector<int> nums =  {2, 4, 6, 8, 8, 8, 11, 13};
    Solution obj;
    vector<int>ans=obj.searchRange(nums,8);
    cout<<"The first and last occurence is : {"
         <<ans[0]<<","<<ans[1]<<"}"<<endl;

return 0;
}