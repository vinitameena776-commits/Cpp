#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
//RECURSION FN
int bs(vector<int>&nums,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(target==nums[mid]) return mid;
    else if(target>nums[mid]) return bs(nums,mid+1,high,target);
    return bs(nums,low,mid-1,target);
}
int search(vector<int>&nums,int target){
    return bs(nums,0,nums.size()-1,target);
}

int binarysearch(vector<int> &nums,int target){
    int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            else if(target<nums[mid]){
                high=mid-1;
            }else if(target>nums[mid]){
                low=mid+1;
            }
        }
        return -1;
}
};
int main(){
vector<int>nums2={3,4,6,7,9,12,16,17};
Solution obje;
int answer=obje.binarysearch(nums2,6);
if(answer==-1){
    cout<<"The target is not present";
}else{
    cout<<"The target is present";
}
cout<<endl;

vector<int>nums={3,4,6,7,9,12,16,17};
Solution obj;
int ans=obj.binarysearch(nums,6);
if(ans==-1){
    cout<<"The target is not present";
}else{
    cout<<"The target is present";
}
return 0;
}