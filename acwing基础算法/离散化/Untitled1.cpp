#include<bits/stdc++.h>
using namespace std;


const int N=3e6+1;

//n+2m的一个范围

int n,m;
int a[N];
int s[N];
//新的映射所对应下标

vector<int> alls;
//所有插入数下标
typedef pair<int ,int>	PII;
//自定义的pair的类型


vector<PII> add,query;
//add插入数的数值和下标
//query查询区间的数值左和右


//二分
int find(int x)
{
	int l=0,r=alls.size()-1;
	while(l<r)
	{
		int mid =l+r>>1;
		if(alls[mid]>=x)	r=mid;
		else l=mid+1; 
	}
	return r+1;//加一是位置的原因

}

int main()
{
	
	cin>>n>>m;//正常读入


	for(int i=0;i<n;i++)
	{
		int x,c;
		cin>>x>>c;
		add.push_back({x,c});
		alls.push_back(x); 
	}


	for(int i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		
		query.push_back({l,r});
	}
	
	sort(alls.begin(),alls.end);
	alls.erase(unique(alls.begin(),alls.end()),alls.end());
	//处理插入
	for(auto item:add )//auto 相当于pair<int, int>
	{
		int x=item.first;//pair<int ,int>中第一个int
		a[x]+=item.second;
	}
	for(auto item:query)
	{
		int l=find(item.first),r=find(item.second);
		cout<<s[r]-s[l-1]<<endl;
	}

	return 0;
 } 
