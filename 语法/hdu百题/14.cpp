#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
    int a[n];
    float s=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        for(int j=i;j>0;j--)
        {
        if (a[j]>a[j-1])
        {
            int m=a[j];
            a[j]=a[j-1];
            a[j-1]=m;
        }
        }
    }
    for(int k=1;k<n-1;k++)
        {
            s+=a[k];
        }
    
    float ans;
    ans=s/(n-2);
    cout<<fixed<<setprecision(2)<<ans;
    }
}
/*1.不需要冒泡
 *2.while cin里面两个问题：对循环理解不够
 */
