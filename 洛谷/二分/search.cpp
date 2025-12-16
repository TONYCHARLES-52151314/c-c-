#include<iostream>
using namespace std;
const int N=1e6+1;
int a[N];
int search(int x,int l,int r)
{
    while(l<r)
    {
        int mid=l+r >> 1;
        if(a[mid]>=x)   r=mid;
        else   l=mid+1;
    }
    return l;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int x;

    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    while(m--)
    {
        cin>>x;
        int p=search(x,1,n);
        if(a[p]!=x)    cout<<"-1";
        else cout<<p;
    }
}