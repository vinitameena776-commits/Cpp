#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<int>mergesortedarr(vector<int>&num1,vector<int>&num2,int n,int m){
    int right=0,left=0;
    vector<int>num3;int index=0;
    while(left<n && right<m){
        if(num1[left] <= num2[right]){
            num3.push_back(num1[left++]);
        }else{
            num3.push_back(num2[right++]);
        }
    }
    while(left<n)num3.push_back(num1[left++]);
    while(right<m) num3.push_back(num2[right++]);
    for (int i = 0; i < n+m; i++){
        num1[i]=num3[i];
    }  
  }
};
int main(){
    vector<int> num1 = {1, 3, 5, 0, 0, 0};
    vector<int> num2 = {2, 4, 6};
    Solution obj;
    obj.mergesortedarr(num1,num2,3,3);
    // Print merged array
    for (int x : num1)
      cout << x << " ";
    return 0;
}