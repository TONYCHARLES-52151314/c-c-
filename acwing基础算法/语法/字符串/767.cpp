#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,p;
    getline(cin,s);
    for(int i=0;s[i];i++)
    {
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))  p[i]=s[i]+1;
        else    p[i]=s[i];
    }
    cout<<p<<endl;
    return 0;
}