#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<vector<int>>merge(vector<vector<int>>nums){
    int n=nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for (int i = 0; i <n; i++)
    {
        int start=nums[i][0];
        int end=nums[i][1];
        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
        for (int j  = i+1; j < n; j++)
        {
            if(nums[j][0]<=end){
                end=max(end,nums[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}
};
int main(){
 Solution sol;
 vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
 vector<vector<int>> result = sol.merge(intervals);

    for (auto interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
return 0;
}