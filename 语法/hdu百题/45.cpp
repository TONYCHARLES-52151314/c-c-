//高中染色问题
#include<iostream>
using namespace std;
long long dp[55];

int main()
{
    dp[1]=3;
    dp[2]=6;
    //特别要小心3的时候，1和n-1是挨在一起的
    dp[3]=6;
    for(int i=4;i<=50;i++)
        dp[i]=2*dp[i-2]+dp[i-1];
    int n;
    while(cin>>n&&n!=EOF)
    {
        printf("%lld\n",dp[n]);//lld的占位符要当心一下
    }
}
//当第n-1个和第1个同色时，第n个只有一种可能，dp[n-1]
//当第n-1个和第1个异色时，第n个有2种可能，2dp[n-2]