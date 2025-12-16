#include <iostream>
#include<algorithm>
using namespace std;

const int N = 1010;

int a[N][N], s[N][N];

int main() {
    int n;
    cin >> n ;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j]; // 求前缀和
        }
        int mx=-1e9;
        for(int x1=1;x1<=n;x1++)
            for(int x2=1;x2<=n;x2++)
                for(int x3=x1;x3<=n;x3++)
                    for(int x4=x2;x4<=n;x4++)
                    {
                        int tmp=s[x3][x4]-s[x1-1][x4]-s[x3][x2-1]+s[x1-1][x2-1];
                        mx=max(mx,tmp);
                    }
        cout<<mx;
    return 0;
}
