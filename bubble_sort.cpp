#include<bits/stdc++.h>
using namespace std;


void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)     //14  7  5  3  19
    {                            
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}