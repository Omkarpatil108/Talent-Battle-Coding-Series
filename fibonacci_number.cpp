#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int num;
    int a=-1,b=1;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Fibonacci Series"<<endl;
    for(int i=0;i<num;i++)
    {
        int c=a+b;
        cout<<c<<",";
        a=b;
        b=c;
    }
    return 0;
}