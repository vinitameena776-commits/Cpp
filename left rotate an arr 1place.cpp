//ROTATE AN ARRAY BY 1 PLACE ONLY

#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>&arr){
    int temp=arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
}
 
int main(){
vector<int>arr={1,2,3,4,5};
rotate(arr);
cout<<"The sorted array is :";
for(int x:arr){
    cout<<x<<",";
}
return 0;
}