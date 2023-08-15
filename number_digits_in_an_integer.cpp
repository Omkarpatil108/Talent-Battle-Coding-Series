#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int num,cnt=0;
    cout<<"Enter Number";
    cin>>num;
    if(num==0) cout<<"1"<<endl;
    while(num!=0)
    {
        num=num/10;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}