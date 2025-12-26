//➡️OPTIMAL APPROACH
#include<bits/stdc++.h>
using namespace std;
void reverseArr(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void rotateleft(int arr[],int k,int n){
    k=k%n;
    reverseArr(arr,0,k-1);
    reverseArr(arr,k,n-1);
    reverseArr(arr,0,n-1);
}
void rotateRight(int arr[], int k, int n) {
    k = k % n;            // normalize k

    reverseArr(arr, 0, n - 1);   // step 1: reverse whole array
    reverseArr(arr, 0, k - 1);   // step 2: reverse first k elements
    reverseArr(arr, k, n - 1);   // step 3: reverse remaining elements
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1,2,3,4,5,6,7};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateleft(arr,k,n);
    cout<<"reverses array is:"<<endl;
    for (int i = 0; i <n; i++) cout << arr[i] << " ";

    cout << "\n";
    rotateRight(arr2,k,n);
    cout<<"reverses array is:"<<endl;
    for (int i = 0; i <n; i++) cout << arr2[i] << " ";

    cout << "\n";
return 0;
}

//➡️BETTER APPROACH
/*#include <bits/stdc++.h>
using namespace std;

    // Function to rotate the array to the right by k positions
    void rotateRight(int arr[], int n, int k) {
        if (n == 0) return;

        // Normalize k if greater than n
        k = k % n;

        // Store last k elements in a temporary array
        int temp[k];
        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = arr[i];
        }

        // Shift the first n-k elements to the right by k steps
        for (int i = n - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];
        }

        // Copy back the k elements to the start
        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }

    // Function to rotate the array to the left by k positions
    void rotateLeft(int arr[], int n, int k) {
        if (n == 0) return;

        // Normalize k if greater than n
        k = k % n;

        // Store first k elements in temporary array
        int temp[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        // Shift remaining elements to the left by k positions
        for (int i = k; i < n; i++) {
            arr[i - k] = arr[i];
        }

        // Copy back the stored elements to the end
        for (int i = 0; i < k; i++) {
            arr[n - k + i] = temp[i];
        }
    };

// Driver code
int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateRight(arr, n, k);
    cout << "Array after right rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << "\n";

    // Reset array for left rotation demo
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    rotateLeft(arr2, n, k);
    cout << "Array after left rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";

    return 0;
}


//➡️BRUTE APPROACH
#include<bits/stdc++.h>
using namespace std;
void rightrotatearray(vector<int>&arr,int k){ // k tells kitni position se shift krni h 
    //⭐RIGHT ROTATE
    vector<int>temp(arr.size());
    for (int i = 0; i <arr.size(); i++)
    {
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
}
void leftrotatearray(vector<int>&arr,int k){ 
    //⭐LEFT ROTATE
    vector<int>temp(arr.size());
    for (int i = 0; i <arr.size(); i++)
    {
        temp[(i-k+arr.size())%arr.size()]=arr[i];//(+n )avoids negative index
    }
    arr=temp;
}
int main(){
vector<int>arr={1,2,3,4,5};
rightrotatearray(arr, 2);
cout<<"The right rotated array is :";
for(int x:arr){
    cout<<x<<",";
}
cout<<endl;

leftrotatearray(arr, 2);
cout<<"The left rotated array is :";
for(int x:arr){
    cout<<x<<",";
}
return 0;
}*/
