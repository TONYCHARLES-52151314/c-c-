//偶数求和
/*平均数=和/个数
 * 把所有要读的偶数都读一遍:循环
 *和：及时清零

 *个数：计数器（及时清零）
 */
#include<iostream>
using namespace std;
int main()
{
    int m,n,j=0,sum=0;
    cin>>n>>m;
    for(int i=2;i<=n*2;i+=2)
    {
        sum+=i;//阶段性求和
        j++;//阶段性计数
        
        if(j==m){
            cout<<sum/j<<" ";
            sum=0;
            j=0;
        }    
        //最后不够了怎么办
    }
    //放到循环外面来做就行了
    if(j>0){
        cout<<sum/j;
    }
    return 0;
}