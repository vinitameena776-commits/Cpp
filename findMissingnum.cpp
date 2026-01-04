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
int find_missing(int n ,vector<int>arr){
  int sum=n*(n+1)/2;
  int sum2=0;
  for (int i = 0; i <n-1; i++)//4 numbers will be there starting from 0 so <n-1
  {
    sum2=sum2+arr[i];
  }
  return sum-sum2;
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
return 0;
}