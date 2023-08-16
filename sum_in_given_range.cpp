#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total=0,a,b;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        total+=i;
    }
    cout<<total<<endl;
    return 0;
}