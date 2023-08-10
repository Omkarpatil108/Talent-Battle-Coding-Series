#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>=65 && c<=90 || c>=97 && c<=122)
    {
        cout<<"Alphabet"<<endl;
    }
    else{
        cout<<"Not an alphabet"<<endl;
    }
    
    return 0;
}