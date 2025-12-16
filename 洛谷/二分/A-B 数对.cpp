#include<iostream>
#include<algorithm>
using namespace std;
const int N=2e5+5;
int a[N];
int search_left(int a[],int l,int r,int x)

{
	while(l<r)
	{
		int mid=l+r>>1;
		if(a[mid]<x)	l=mid+1;
		else r=mid;
	}
	if(a[l]==x)	return l;
	else return -1;
}
int search_right(int a[],int l,int r,int x)

{
	
	while(l<r)
	{
		int mid=l+r+1>>1;
		if(a[mid]<=x)	l=mid;
		else r=mid-1;
	}
	if(a[l]==x)	return l;
	else return -1;
}
int main()
{
	int n,c;
	cin>>n>>c;
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	long long sum=0;
	for(int i=n;i>1;i--){
		int left=search_left(a,1,i-1,a[i]-c);
		int right=search_right(a,1,i-1,a[i]-c);
		if(left!=-1)	sum+=right-left+1;
	}
	cout<<sum<<endl; 
} 
//不理解sum为什么要定义成long long 
//stl容器貌似有更好的办法处理？