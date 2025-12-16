#include<iostream>
using namespace std;
int main()
{
    int a[35]={0},b[35];
    a[1]=1;
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        b[1]=a[2]+a[n];
        b[n]=a[n-1]+a[1];
        for(int i=2;i<=n-1;i++)
        {
            b[i]=a[i-1]+a[i+1];
        }
        for(int i=1;i<=n;i++)
        {
            a[i]=b[i];
        }
    }
    cout<<a[1]<<endl;
    return 0;
}