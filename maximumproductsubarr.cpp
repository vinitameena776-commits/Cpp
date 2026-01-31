#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
//OPTIMAL 
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
     int ans=INT_MIN;
    int prefix=1;
    int suffix=1;
    for(int i=0;i<n;i++){
        if(prefix==0)prefix=1;
        if(suffix==0)suffix=1;
        prefix*=nums[i];
        suffix*=nums[n-i-1];
    ans=max(ans,max(prefix,suffix));
     }
 return  ans;
}
int maxproduct(vector<int>nums){
int n=nums.size();
int maxproduct=INT_MIN;
int product=1;
  for(auto x:nums){
    product*=x;
    maxproduct=max(maxproduct,product);
  }
 return  maxproduct;
}
};
int main(){
Solution obje;
vector<int>nums2={2,3,-2,4};
cout<<"The maximum product of the subarray is :"<<obje.maxProduct(nums2);
cout<<endl;

Solution obj;
vector<int>nums={1,2,3,4,5,0};
cout<<"The maximum product of the subarray is :"<<obj.maxproduct(nums);
return 0;
}