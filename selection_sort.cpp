#include<bits/stdc++.h>
using namespace std;

int selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i;j<n;j++)    //14  7  5  3  19
        {
            if(a[j]<a[mini])         //14  7  5  45  36
            {
                mini=j;
            }
        }
        swap(a[i],a[mini]);
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
    selection(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}