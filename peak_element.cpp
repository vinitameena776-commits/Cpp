#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//OPTIMAL APPROACH
int Peak_element(vector<int>&nums){
    int n=nums.size();
    if(n==1) return 0;
    if(nums[0] > nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
        else if(nums[mid] > nums[mid-1]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

//BRUTE APPROACH
    int peakelement(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if ((i == 0 || nums[i] > nums[i - 1]) &&
                (i == n - 1 || nums[i] > nums[i + 1])) {
                return i;
            }
        }
        return -1;
    }
};

int main() {

    //BRUTE APPROACH 
    vector<int> nums = {1,2,3,4,5,6,7,8,5,1};
    Solution sol;
    int ans = sol.peakelement(nums);
    cout << "The peak element index is: " << ans << endl;
    
    vector<int> nums2 = {1,2,1,3,5,6,4} ;
    Solution obj;
    int ans2 = obj.Peak_element(nums2);
    cout << "The peak element index is: " << ans2 << endl;
    return 0;
}
