//➡️OPTIMAL APPROACH

#include<bits/stdc++.h>
using namespace std;
int i=0;
int removeduplicate(vector<int>&arr){
    for (int j= i; j <arr.size(); j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }
}
return i+1; //returns the no. of unique element 
}
 
int main(){
vector<int>arr={1,1,2};
cout<<"The number of unique elements are:"<<removeduplicate(arr);
return 0;
}


//➡️BRUTE APPROACH
/*#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>&arr){
    set<int>st;
    for (int x:arr)
    {
        st.insert(x);
    }
    int idx=0;
    for (int x:st)
    {
        arr[idx]=x;
        idx++;
    }
    return st.size();
}
int main(){
vector<int>arr={1,1,2};
cout<<"The number of unique elements are:"<<removeduplicates(arr);
return 0;
return 0;
}*/