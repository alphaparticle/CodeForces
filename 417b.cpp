#include<iostream>
using namespace std;
int a[100009]={0};
int main()
{
    int n,i,k,x;
    cin>>n;
    int flag=1;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cin>>k;
        if(a[k]==x)a[k]++;
        else if(a[k]<x)flag=0;
    }
    if(flag)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
