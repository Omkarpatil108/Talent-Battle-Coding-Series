#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number";//576
    cin>>num;
    int last,total,rev=0;
    while(num!=0)
    {
        last=num%10;
        rev=rev*10+last;  //675
        num=num/10;
    }
    cout<<rev;
    return 0;
}