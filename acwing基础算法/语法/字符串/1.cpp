//唐氏题
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline (cin ,s );
    for(int i=0,l=s.size();i<l;i++)
    {
        if( s[i]>='a' and s[i<='z'])    s[i]=s[i]-'a'+'A';
    }
    cout<<s;
    return 0;
}