#include<bits/stdc++.h>
using namespace std;

vector<int>sortedarr(vector<int>a1,vector<int>a2){
    int i=0;
    int j=0;
    vector<int>unionarr;
    while (i<a1.size() && j<a2.size())
    {
        if(a1[i]<a2[j]){
            if(unionarr.size()==0 || unionarr.back()!=a1[i]){
                unionarr.push_back(a1[i]);
            }
         i++;
        }
        else{
                if(unionarr.size()==0 || unionarr.back()!=a2[j]){
                unionarr.push_back(a2[j]);
            }
         j++;
        }
    }
    while (i<a1.size())
    {
            if(unionarr.size()==0 || unionarr.back()!=a1[i]){
                unionarr.push_back(a1[i]);
            }
         i++;
    }
    while (j<a2.size())
    {
            if(unionarr.size()==0 || unionarr.back()!=a2[j]){
                unionarr.push_back(a2[j]);
            }
         j++;
    }
    return unionarr;
    
}
//USING SET
vector<int>findUnion(vector<int>arr1,vector<int>arr2){
    set<int>st;
    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        st.insert(arr2[i]);
    }
   vector<int>temp;
   for (auto it:st)
    {
      temp.push_back(it);
    }
  return temp;
}
 
int main(){
vector<int>arr1={1,2,2,3,4};
vector<int>arr2={4,5,6,7};
vector<int> result=findUnion(arr1,arr2);
cout<<"The union is:";
for(int x : result){
    cout << x << " ";
}
cout<<endl;
vector<int>a1={1,2,2,3,4};
vector<int>a2={4,5,6,7};
vector<int> result2=sortedarr(a1,a2);
cout<<"The union is:";
for(int x : result2){
    cout << x << " ";
}

return 0;
}

#include<iostream>
using namespace std;
 
int main(){
void findmax(vector<int>&arr){
    
}
return 0;
}