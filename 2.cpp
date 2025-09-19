#include<iostream>
using namespace std;
int main()
{
    // a=2;
    //int b=3;
    int a,b;
    cout<<"Value of a ,b"<<endl;
    cin>>a>>b;
    cout<<endl;
    bool first =(a==b);//gives answer in 0 1 as true or false 
    cout<<first<<endl;

    bool second =(a>b);
    cout<<second<<endl;

    bool third =(a<=b);
    cout<<third<<endl;

    return 0;
}
