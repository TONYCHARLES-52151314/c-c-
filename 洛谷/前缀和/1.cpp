#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N];
int b[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
        
    for(int i=1;i<=n;i++)
        a[i]=a[i]+a[i-1];
    int pair;
    cin>>pair;
    for(int i=1;i<=pair;i++)
    {
        int x,y;
        cin>>x>>y;
        b[i]=a[y]-a[x-1];
    }
    for(int i=1;i<=pair;i++)
        cout<<b[i]<<endl;
    return 0;
}