#include<iostream>
using namespace std;
const long long N=100010;
int a[N],b[N];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int p=m;
    while(m--)
    {
        int x;
        scanf("%d",&x);
        int l=0,r=n-1;
        //找左边界的点
        while(l<r){
        int mid=l+r>>1;
        if(a[mid]>=x)  r=mid;    
        else    l=mid+1;
        }
        if(a[l]==x) b[m]=l+1;
        else b[m]=-1;
    }    
    for(int i=p;i>0;i--)
        printf("%d",b[i]);
    return 0;
}