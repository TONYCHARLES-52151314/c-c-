#include<iostream>
#include <iomanip>//setprecision
#include <cmath>//sqrt
using namespace std;
int main()
{
    int a,b,c,p;
    double s;
    cin>>a>>b>>c;
    p=(a+b+c)*0.5;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<s;
}