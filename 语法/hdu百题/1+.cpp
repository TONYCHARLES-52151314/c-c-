
#include <cstdio>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	char a[5];
	while(cin>>a){
        //冒泡排序：
		for(int i=0;i<3;i++){
			for(int j=i;j<3;j++){
				if(a[i]>a[j]){ //交换
					int m=a[i];
					a[i]=a[j];
					a[j]=m;
				}
			}
		}
		for(int i=0;i<3;i++){
			if(i!=2) cout<<a[i]<<' ';
			else cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}