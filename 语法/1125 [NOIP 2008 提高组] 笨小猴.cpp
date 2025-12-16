#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int flag=0;
	int a[26]={0};
	string s;
	cin>>s;
	int k=strlen(s);
	for(int i=0;i<k;i++)	
		a[s[i]-'a'] ++ ;
	sort(a,a+k);
	int ans=a[k-1]-a[0];

	if(k==2)	flag=1;
	if(k>2){
		for(int j=2;j*j<=ans;j++)
			if(ans%j==0){
				flag=1;
				break;
			}
	} 
	if(flag=1)	cout<<"Lucky Word"<<endl<<ans;
	else cout<<"No Answer"<<endl<<ans; 
} 
