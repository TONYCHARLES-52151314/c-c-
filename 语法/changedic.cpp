#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[27];
    string s,t;
    cin>>s>>t;
    int lens = s.length();
    int lent = t.length();
    int p=min(lens,lent);
    for(int i=0;i<26;i++)   a[i]='a'+i;
    for(int i=0;i<p;i++){
    if(s[i]<t[i])   {
        swap(a[s[i]-'a'],a[t[i]-'a']);
        break;
        }
    }
    for(int i=0;i<26;i++)   printf("%c",a[i]);
    return 0;
}