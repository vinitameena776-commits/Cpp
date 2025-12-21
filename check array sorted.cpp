//➡️OPTIMAL APPROACH
#include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int>&arr){
    for (int i = 1; i <arr.size(); i++)
    {
      if(arr[i]<arr[i-1]){
         return false;
            }
        
        
    }
    return true;
}
 
int main(){
vector<int>arr={1, 2, 3, 4, 5};
bool ans=issorted(arr);
if(ans){
    cout<<"TRUE"<<endl;
}else{
cout<<"FALSE"<<endl;
}
return 0;
}


//➡️BRUTE APPROACH
/* #include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int>&arr){
    for (int i = 0; i <arr.size(); i++)
    {
        for (int j = i+1; j<arr.size(); j++)
        {
            if(arr[j]<arr[i]){
                return false;
            }
        }
        
    }
    return true;
}
 
int main(){
vector<int>arr={1, 2, 3, 4, 5};
bool ans=issorted(arr);
if(ans){
    cout<<"TRUE"<<endl;
}else{
cout<<"FALSE"<<endl;
}
return 0;
}*/