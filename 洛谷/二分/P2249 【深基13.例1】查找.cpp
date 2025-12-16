#include<iostream>
using namespace std;
const int N=1e6+5;
int a[N];

int search(int l,int r,int x,int a[])//find left place
{
	while(l<r)
	{
		int mid = l + r >> 1;
        if (a[mid]>=x) r = mid;
        else l = mid + 1;
	}
	if(a[l]!=x)	return -1;
	else return (l+1);
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(m--)
	{
		int p;
		scanf("%d",&p);
		printf("%d ",search(0,n-1,p,a));
	}
	return 0;
} 
