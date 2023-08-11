#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,month;
    cout<<"Enter year";
    cin>>year;
    cout<<"Enter Month";
    cin>>month;
    if(month==2) if((month==2) &&(year%400==0 ||(year%100!=0 && year%4==0))) cout<<"thid month has 29 days";
    
    else if(month==2) cout<<"This month has 28 days";
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) cout<<"thid month has 31 days";
    else cout<<"thid month has 30 days";
    return 0;
    
}