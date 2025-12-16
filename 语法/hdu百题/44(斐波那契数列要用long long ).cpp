#include<iostream>
using namespace std;
const int N=50;
long long a[N];
int main()
{
    int n;
    cin>>n;

    a[1]=1;
    a[2]=2;

    for(int i=3;i<=50;i++)
        a[i]=a[i-1]+a[i-2];
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        cout<<a[y-x]<<endl;
    }    
    return 0;
}
//按理说斐波那契数列第93项爆int
