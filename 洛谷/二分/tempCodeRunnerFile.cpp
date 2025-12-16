#include<iostream>
using namespace std;
double f(double a,double b,double c,double d,double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
double search(double a,double b,double c,double d,double l,double r){
    while(r - l >1e-8)
    {
        double mid=(l+r)/2;
        if(f(a,b,c,d,mid)*f(a,b,c,d,l)-0.0<=0)//=0避免死循环
            r=mid;
        else
            l=mid;
    }
    return l;
}
int main(){
	int s=0;
	double a,b,c,d,l,r;
    cin>>a>>b>>c>>d;
    for(int i=-100;i<=99;i++)//99防止数组越界
    {
        //忘了如果整数点就是根的情况
        if(!f(a,b,c,d,i)) 
        {
            printf("%.2lf ",l); 
            s++;
        }
        if(f(a,b,c,d,i)*f(a,b,c,d,i+1)<0)
        {

        	printf("%.2lf ",search(a,b,c,d,i,i+1));
            s++;
		}
        if(s==3) break;
    }
    return 0;
}

