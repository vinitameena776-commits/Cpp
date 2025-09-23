//PRINTING ARRAY

#include <iostream>
using namespace std;
#include<climits>
int getmax(int arr[],int size){
    int max= INT_MIN;
    for (int i = 0; i < size; i++)
    {
    
    if (arr[i]>max)
    {
        max=arr[i];
    }
    };
return max;
}
int getmin(int arr[],int size){
    int min=INT_MAX;
    for (int i = 0; i <size; i++)
    {
    if (arr[i]<min)
    {
        min=arr[i];
    }
    }
return min;
}

int main() {
    int first[]={1,2,3,4,5};
    cout<<"the maximum value is :"<<getmax(first,5)<<endl;
    cout<<"the minimum value is :"<<getmin(first,5)<<endl;
    cout<<endl;
    return 0;
}