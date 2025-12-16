#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m;
    for(int j=0;j<m;j++){
        double s=0.00;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if (i % 2 == 1) s+=1/i;
            else s-=1.0/i; //一定得是1.0！！！！！！！
        }
        cout<< fixed<<setprecision(2)<<s<<endl;
    }
	return 0;
}