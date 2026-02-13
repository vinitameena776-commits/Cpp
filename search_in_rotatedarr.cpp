#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int search(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;

        //Check if the left half is sorted
        if(nums[low] <=nums[mid]){

            // If target lies in the sorted left half, search there
            if(target >= nums[low] && target <=nums[mid]){
                high=mid-1;
            }
            // Else search in the right half
            else{
                low=mid+1;
            }
        }
        // Otherwise, right half is sorted
        else{
            // If target lies in the sorted right half, search there
            if(target >= nums[mid] && target <= nums[high]){
                low=mid+1;
            }
            // Else search in the left half
            else{
                high=mid-1;
            }
        }
    }
    // If not found, return -1
    return -1;
}
};
int main(){
vector<int>nums={4,5,6,7,0,1,2};
Solution obj;
int result=obj.search(nums,0);
cout<<"Target is present at index:"<<result<<endl;
return 0;
}