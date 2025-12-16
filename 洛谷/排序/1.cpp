#include<iostream>
using namespace std;
const int M=1000;
int b[M];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)//初始化b中元素 
		b[i]=0; 
	for(int i=0;i<m;i++)
	{
		//桶 
		int x; 
		scanf("%d",&x);//把 a的元素输进来 
		b[x]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]!=0)
		{
		
			while(b[i]--)
				cout<<i<<" ";
		}
	}
	return 0;
	
} 
