#include<bits/stdc++.h>
using namespace std;
int findlargest(vector<int>&arr){
    int largest=arr[0];
    for (int i = 1; i<arr.size(); i++)
    {
       if(arr[i]>largest){
        largest=arr[i];
       }
    }
 return largest;
}   
int main(){
vector<int>arr={2,5,6,8,9};
cout<<"The largest element is :"<<findlargest(arr);
return 0;
}