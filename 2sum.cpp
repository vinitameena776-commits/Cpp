#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
// OPTIMAL APPROACH to check if Two Sum exists
// Uses sorting + two pointers

string TwoSumExist(vector<int> arr, int target) {
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return "YES";          // Pair found
        }
        else if (sum > target) {
            right--;              // Decrease sum
        }
        else {
            left++;               // Increase sum
        }
    }
    return "NO";                 // No pair found
}

//BETTER APPROACH 
 string Twosumexist(vector<int>arr,int target){
    map<int,int>mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int compliment=target-arr[i];
        if(mp.find(compliment)!=mp.end()){
            return "yes";
        }
        mp[arr[i]]=i;
    }
    return "No";
 }
//BRUTE APPROACH
 string twosumexist(vector<int>arr,int target){
    for (int i = 0; i < arr.size(); i++)
    {
       for (int j = i+1; j<arr.size(); j++)
       {
        if(arr[i]+arr[j]==target){
            return "yes";
        }
       }
    }
    return "no";
 }
};
int main(){
vector<int>arr={1,2,3,4,5};
solution sol;
cout<<sol.twosumexist(arr,6)<<endl;

vector<int>arr2={1,2,3,4,5};
solution solu;
cout<<solu.Twosumexist(arr2,6)<<endl;

vector<int>arr3={1,3,5,2,4};
solution solut;
cout<<solut.TwoSumExist(arr3,6)<<endl;
return 0;
}