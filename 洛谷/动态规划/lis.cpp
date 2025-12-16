#include<iostream>
using namespace std;
const int N=1005;
int a[N],b[N];
int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=1;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i;j<=n-1;j++)
            if(a[i]<a[j])
            {
                b[i]=max(b[i],b[j]+1);
            }
        
        k=max(b[i],k);
    }
    cout<<k<<endl;
    return 0;
}