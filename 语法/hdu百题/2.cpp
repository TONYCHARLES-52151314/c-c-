#include <iostream>
#include<string.h>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
	double a,b,c,d;
	while(cin>>a>>b>>c>>d){
		double k=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		printf("%.2lf\n",k);
	}
	return 0;
}