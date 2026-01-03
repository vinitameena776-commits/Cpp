#include<bits/stdc++.h>
using namespace std;
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
 
int main(){
vector<int>arr={1,2,3,5};
cout<<"The missing number is :"<<findmissing(5,arr);
return 0;
}