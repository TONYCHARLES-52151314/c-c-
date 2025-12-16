#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char s[100];
    fgets(s,100000000,stdin);//gets已经被淘汰了,stdin把终端当做文件读入
    string p;

    getline(cin,p);//string类型

    cin.getline(s,100);//char类型


    puts(s);
    printf("%s\n",s)
    
    
    cout<< s << endl;
    cout << p <<endl;
    return 0;
}