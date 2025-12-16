/*1.读入字符串
2.遍历每一个字符
3.统计每一个字符出现的次数（每一个字符都有对应的数字）
4.把满足条件的 第一个字符的位置存下来*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1000000];
    cin>>s;
    int a[26]={0};
    for(int i=0,len=strlen(s);i<len;i++)//97对a，s[i]=?,计数格里加一
    {
        a[s[i]-97]+=1;//直接减‘a’
    }//遍历并统计
    for(int j=0;j<26;j++)
    {
        if(a[j]==1)
            {cout<<char(j+97)<<endl;return 0;}//return 0;

    }
    cout << "no" ;
    return 0;
}