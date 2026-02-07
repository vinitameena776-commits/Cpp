#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<vector<int>>foursum(vector<int>nums,int target){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++){
        //to remove duplicates
        if(i>0 && nums[i]==nums[i-1]) continue;
        for (int j = i+1; j<n; j++){
           int p=j+1 , q = n-1;
           while(p<q){
            long long sum=(long long)nums[i] + (long long) nums[j] + (long long)nums[p] +(long long)nums[q];
            if(sum<target) p++;
            else if(sum>target) q--;
            else{ 
                ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                p++;q--;
            while(j<n && nums[j]==nums[j-1]) j++;
            while(p<q && nums[p]==nums[p-1]) p++;
              }
            }
        } 
    }
   return ans; 
}
};
int main(){
    vector<int> num = {1, 0, -1, 0, -2, 2};
    int target = 0;

    Solution obj;
    vector<vector<int>> ans = obj.foursum(num,target);

    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
return 0;
}