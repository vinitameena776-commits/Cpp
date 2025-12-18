#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j = low;j<high; j++)
    {
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

    void quicksort(vector<int>&arr,int low,int high){
        if(low<high){
            int p=partition(arr,low,high);
            quicksort(arr,low,p-1);
            quicksort(arr,p+1,high);
        }
    
    
} 
int main(){
    vector<int> arr= {5, 1, 4, 2, 8};
    quicksort(arr,0,arr.size()-1);

    cout << "Sorted array: ";
    for (int i = 0; i <arr.size(); i++)
        cout << arr[i] << " ";
return 0;
}
