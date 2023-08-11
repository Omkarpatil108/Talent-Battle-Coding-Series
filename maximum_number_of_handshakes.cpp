#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter N :";
    cin>>N;
    int total=0;
    for(int i=1;i<=N;i++)
    {
        total+=N-i;
    }
    cout<<"Maximum shakes is "<<total<<endl;
    return 0;
}