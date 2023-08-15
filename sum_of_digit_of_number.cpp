#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;  //4521
    cout<<"Enter number";
    cin>>num;
    int mod,total=0;
    while(num!=0)
    {
        mod=num%10;
        total+=mod;
        num=num/10;
        
    }
    cout<<total<<endl;
    return 0;
}