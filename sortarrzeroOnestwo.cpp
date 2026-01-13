#include<bits/stdc++.h>
using namespace std;
class solution{
    public:

    //OPTIMAL APPROACH 
    void Sortzerosonestwos(vector<int>&arr){
        int n=arr.size();
        int low=0,mid=0;
        int high=n-1;
        for (int i = 0; i < n; i++)
        {
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        
    }
    //BRUTE APPROACH 
    void sortZerosOnesTwos(vector<int>&arr){
        int count0=0,count1=0,count2=0;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i]==0){
                count0++;
            }
            else if(arr[i]==1){
                count1++;
            }else{
                count2++;
            }
        }
        int index=0;
        //places all zero
        while (count0>0)
        {
            arr[index++]=0;
            count0--;
        }
        //places all 1's
        while (count1>0)
        {
            arr[index++]=1;
            count1--;
        }
        //places all 2's
        while (count2>0)
        {
            arr[index++]=2;
            count2--;
        }  
    }

    //BETTER APPROACH 
    void SortZerosOnesTwos(vector<int>&arr){
        int count0=0,count1=0,count2=0;
        for (int  i = 0; i < arr.size(); i++)
        {
            if(arr[i]==0){
                count0++;
            }
            else if(arr[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        //place all 0's
        for (int i = 0; i < count0; i++)
        {
            arr[i]=0;
        }
        for (int i = count0; i < count0+count1; i++)
        {
            arr[i]=1;
        }
        for (int i = count0+count1; i < arr.size(); i++)
        {
            arr[i]=2;
        }
        
        
    }
};
 
int main(){
vector<int>arr={1,0,2,1,0,2};
solution object;
object.sortZerosOnesTwos(arr);
for (int x:arr)
{
    cout<<x<<" ";
}
cout<<endl;

vector<int>arr2={1,0,2,1,0,2};
solution obj;
obj.SortZerosOnesTwos(arr2);
for(int a:arr2){
    cout<<a<<" ";
}
cout<<endl;
vector<int>arr3={1,0,2,1,0,2};
solution ob;
ob.Sortzerosonestwos(arr3);
for (int x:arr3)
{
    cout<<x<<" ";
}


return 0;
}