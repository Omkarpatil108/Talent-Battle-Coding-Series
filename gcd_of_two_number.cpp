#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}