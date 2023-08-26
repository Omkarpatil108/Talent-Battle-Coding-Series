#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int a[]={1,2,3,4,5,6,8,9};
    for(int i=0;i<7;i++)
    {
        sum=sum+a[i];
    }
    int s=7*(7+1)/2;
    cout<<s-sum;

}