#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    for(int i=0;i<a.size();i++)
    {
        if(a[i+1]!=0)   b[i]=a[i]+a[i+1];
        else b[i]=a[i]+a[1];
    }
    cout<<b<<endl;
    return 0;
}