#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
    char c;
    cin>>c;
    if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' ||c=='U' || c=='u')
    {
        cout<<"Vowel"<<endl;
    }
    else if(!(c>='a' && c<='z' || c>='A' && c<='Z'))
    {
        cout<<"Invalid input"<<endl;
    }
    else
    {
        cout<<"Consonant";
    }
    return 0;
}
