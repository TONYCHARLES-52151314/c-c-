#include<iostream>
using namespace std;
int main()
{
    float a;
    int b,b1,b2,b3,b4;
    cin>>a;
    b=a*10;
    b1=b%10;//1234%10=4
    b2=b/10%10;//1234/10=123,123%10=3
    b3=b/100%10;//1234/100=12,12%10=2
    b4=b/1000;//1234/1000=1
    cout<<b1+b2*0.1+b3*0.01+b4*0.001<<endl;
    return 0;
}