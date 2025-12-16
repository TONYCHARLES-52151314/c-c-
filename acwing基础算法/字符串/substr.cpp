//substr(i,len)返回从i开始长度为len的一段，len省略就是到结尾
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int p=0;
        for( int i=0;i<a.size();i++)
        {
            if(a[i]>a[p])   p=i;
        }
    
    cout<<a.substr(0,p+1)<<b<<a.substr(p+1);}
    return 0;
    
}