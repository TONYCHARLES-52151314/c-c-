//唐氏题
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    string s;

    cin>>n>>s;


    for(int i=0;i<s.size();i++)
    {
        s[i]+=n;
    }

    cout<<s<<endl;
    return 0;
}