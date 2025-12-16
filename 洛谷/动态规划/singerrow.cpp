//模版题的应用
//队列要踢人变成队形--等价于要依次找到最长的升序降序子序列，然后求和以去杂

#include<iostream>
using namespace std;
int a[105],b[105],c[105];
int main()
{
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=1;
        c[i]=1;
    }
 
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])   b[i]=max(b[i],b[j]+1);
        }
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=n;i>=1;i--)
    {
        for(int j=n+1;j>i;j--)
        {
            if(a[j]<a[i])   c[i]=max(c[i],c[j]+1);
        }
        cout<<c[i]<<" ";
    }
    cout<<endl;
    int mx=1;
    for(int i=1;i<=n;i++)
        mx=max(c[i]+b[i],mx);
    cout<<n+1-mx<<endl;
    return 0;
}