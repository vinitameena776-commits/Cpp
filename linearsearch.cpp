#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&arr,int num){
    for (int  i = 0; i <arr.size(); i++)
    {
        if(arr[i]==num){
           return i;
        }
    }
    return -1;
}
 
int main(){
vector<int>arr={1,2,3,4,5};
int index = linearSearch(arr, 3);
if (index != -1)
        cout << "The number is present at index: " << index;
    else
        cout << "Number not found in the array.";
return 0;
}