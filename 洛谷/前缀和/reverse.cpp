#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int a[1000]={0},b[1000]={0};
    string s;
    cin>>s;
    int n=s.size();
   a[0]=s[0]-'0';
   for(int i=1;i<n;i++)
   {
       a[i]=a[i-1]+s[i]-'0'; 
   }
   for(int i=n-1;i>=0;i--)
   {
        b[i]=b[i+1]+(s[i]-'0'^1);//不懂这个亦或是啥位运算
   }
   int k=1e6;
   for(int i=0;i<n-1;i++)
   {
        k=min(k,a[i]+b[i+1]);
   }
   cout<<k<<endl;
   return 0;
}