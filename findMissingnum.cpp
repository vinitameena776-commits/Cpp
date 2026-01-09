#include<bits/stdc++.h>
using namespace std;
//BRUTE APPROACH
int findmissing(int n,vector<int>arr){
  for (int i = 1; i < n; i++)
  {
    int flag=0;
    for (int j = 0; j< n-1; j++)
    {
      if(arr[j]==i){
       flag=1;
        break;
      }
    }
    if(flag==0){
      return i;
    }
  }
 return -1; 
}
//OPTIMAL APPROACH
int findMissing(int n,vector<int>arr){
  vector<int>hash(n+1,0);
  for (int i = 0; i <n-1; i++)//{1,2,4,5} have only 4 so n-1 ,less then coz index from 0
  {
    hash[arr[i]]=1;
  }
  for (int i =1; i <n; i++)//numbers are from 1 to n only 
  {
    if(hash[i]==0){
      return i;
    }
  }
  return -1;//code run successfully
} 
//BETTER APPROACH 
int find_missing(int n, vector<int> &arr) {
    int sum = n * (n + 1) / 2;   // sum of numbers from 1 to n
    int sum2 = 0;
    // array has (n-1) elements, so valid indices are 0 to (n-2)
    for (int i = 0; i < n - 1; i++) {
        sum2 += arr[i];
    }
    return sum - sum2;          // missing number
}
//2ND BETTER APPROACH
int find_Missing(int n, vector<int> arr) {
    int xor1 = 0;
    for (int i = 1; i <= n; i++) {  // XOR all numbers from 1 to n
        xor1 ^= i;
    }
    int xor2 = 0;
    for (int i = 0; i < n - 1; i++) {  // XOR all array elements
        xor2 ^= arr[i];
    }
    return xor1 ^ xor2;  // XOR of xor1 and xor2 gives the missing number
}


int main(){
vector<int>arr={1,2,3,5};
cout<<"The missing number is :"<<findmissing(5,arr);
cout<<endl;
vector<int>arr2={1,2,4,5};
cout<<"The missing number is :"<<findMissing(5,arr2);
cout<<endl;
vector<int>arr3={1,3,4,5};
cout<<"The missing number is :"<<find_missing(5,arr3);
cout<<endl;
vector<int>arr4={1,2,3,4};
cout<<"The missing number is :"<<find_Missing(5,arr4);
return 0;
}