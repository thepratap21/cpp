#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter the n upto which you want the series"<<endl;
    cin>>n;
    int a=0,b=1;
    cout<<"the fibonacci series is"<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
       int nn=a+b;
       cout<<nn<<" ";
       a=b;
       b=nn;
    }
}