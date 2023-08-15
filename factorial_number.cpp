#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,fact=1;
    cout<<"Enter a number";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        fact*=i;//fact = fact * i;
    }
    cout<<fact<<endl;
    return 0;
}