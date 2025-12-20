//➡️OPTIMAL APPROACH 

#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int>&arr){
    if (arr.size() < 2) return -1;

    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i <arr.size(); i++)
    {
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
vector<int>arr={2,5,8,9,10};
cout<<"Second largest is :"<<secondlargest(arr);
return 0;
}
