#include<bits/stdc++.h>
using namespace std;
class solution{
public:
//OPTIMAL APPROACH
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }

    //PRINT SUBARR WHOSE SUM IS MAXIMUM
    vector<int>printsubarr(vector<int>&arr){
        long long sum=0;
        long long maxi=INT_MIN;
        int start=0,end=0,tempstart=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
                if(sum<0){
                sum=0;
                tempstart=i+1;//i+1 coz at this point it is bad as its negative so the nest one 
            }
            if(sum>maxi){
                maxi=sum;
                start=tempstart;
                end=i;
            }
        }
        vector<int>result;
        for (int i = start; i <=end; i++)
        {
           result.push_back(arr[i]);
        }
        return result;
    }
 //BRUTE APPROACH 
 int maxisubarrsum(vector<int>&arr){
    int maxi=INT_MIN;
    for (int  i = 0; i < arr.size(); i++)
    {
        for (int j = i; j< arr.size(); j++)
        {
            int sum=0;
            for (int k = i; k <=j; k++)
            {
                sum+=arr[k];
            }
            maxi=max(maxi,sum);
        } 
    }
    return maxi;
 }
};
int main(){
vector<int>arr={2,3,5,-2,-7,4};
solution object;
int ans=object.maxisubarrsum(arr);
cout<<"Maximum subarray sum is :"<<ans<<endl;

vector<int>arr2={2,3,5,-2,-7,4};
solution sol;
int ans2=sol.maxisubarrsum(arr2);
cout<<"Maximum subarray sum is :"<<ans2<<endl;

vector<int>arr3={2,3,5,-2,7,-4};
solution solu;
 vector<int>subarr = solu.printsubarr(arr3);
int sum = 0;
for (int x : subarr) sum += x;
cout << "Maximum subarray sum is: " << sum << endl;
cout << "Subarray with Maximum sum is: " << endl;
for (int x : subarr) {
    cout<<x<<" ";
}
cout<<endl;
return 0;
}