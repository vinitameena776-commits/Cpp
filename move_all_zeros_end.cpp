#include <bits/stdc++.h>
using namespace std;
//BETTER APPROACH 
void move_zeros(vector<int>&arr){
    int j=-1;
    for (int  i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for (int i = j+1; i < arr.size(); i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
//BRUTE APPROACH
vector<int> moveZeros(vector<int>& arr) {
    vector<int> temp(arr.size(), 0);
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = temp[i];
    }
    return arr;
}

int main() {
    vector<int> arr = {0, 2, 1, 0, 5};
    vector<int> result = moveZeros(arr);

    cout << "Array after shifting zeros to the end: ";
    for (int num : result) {
        cout << num << " "; // Add a space for readability
    }
    cout << endl;

    vector<int> arr2 = {0, 3, 1, 0, 5};
    move_zeros(arr2);

    cout << "Array after shifting zeros to the end: ";
    for (int num : arr2) {
        cout << num << " "; // Add a space for readability
    }
    cout << endl;


    return 0;
}
