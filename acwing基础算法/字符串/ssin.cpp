//替换问题
#include<iostream>
#include<sstream>
using namespace std;
string a[10002];
int n;
int main() {
    string s,a,b;
    
    getline(cin,s);
    cin>>a>>b;
    
    stringstream ssin(s);//从字符串当中读出信息
    string str;
    while(ssin>>str)
    {
        if(str==a)  cout<<b<<" ";
        else cout<<str<<" ";
    }
    
    return 0;
}