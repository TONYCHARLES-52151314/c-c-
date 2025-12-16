//数据的交换输出
#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n&&n!=0)
    {
        int a[100],ans=1;
        for(int i=1;i<n+1;i++)
        {
            cin>>a[i];//一个一个的输入
            if(a[i]<a[ans])
            {
                ans=i;
            }
        }//记录角标
        if (ans!=1)
        {
            int k=a[ans];
            a[ans]=a[1];
            a[1]=k;
        }
        for(int i=1;i<n+1;i++)
        {
            if (i > 1) cout << " "; // 第一个元素前不输出空格，后续元素前输出空格
          cout << a[i];  
        }
        cout<<endl;
    }
	return 0;
}
