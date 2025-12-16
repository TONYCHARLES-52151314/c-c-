#include<iostream>
#include <iomanip>//setprecision
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a){
        case 1:
            cout<<"I love Luogu!";
        case 2:
            cout<<2+4<<10-2-4;
        case 3:
            cout<<14/4<<14/4*4<<14-14/4*4;
        case 4:
            cout<<set<<setpresicion(3)<<500/3;
        case 5:
            cout<<(260+220)/(12+20);
        case 6:
            cout<<sqrt(6*6+9*9);
        case 7:
            int a=100;
            cout<<a+10<<endl<<a-20<<endl<<0;
        case 8:{
            int r=5;
            double pi=3.141593;
            cout<<2*pi*r<<endl;
            cout<<r*r*pi<<endl;
            cout<<4.0/3*pi*r*r*r<<endl;}
        case 9:
            cout<<((((1+1)*2+1)*2+1)+1)*2;
        case 10:
            cout<<10^180/240;
        case 11:
            cout<<100.0/(8-5);
        case 12:
            cout<<'M'-'A'+1<<endl<<char('A'+17);
        case 13:
            float s=3.141593*(3*3+10*10);
        case 14:{
            cout<<50<<endl;
            break;}


    }
}