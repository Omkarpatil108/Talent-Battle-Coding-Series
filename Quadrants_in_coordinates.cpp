#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0) cout<<"In first quadrant";
    else if(x<0 && y>0) cout<<"In second quadrant";
    else if(x<0 && y<0) cout<<"In third quadrant";
    else if(x>0 && y<0) cout<<"In fourth quadrant";
    else cout<<"On origin";
    return 0;
}