#include<iostream>
using namespace std;
const int N=1001;
int main()
{
    int m,n,a[N],s[N][N];
    int q;
    scanf("%d%d%d", &n, &m, &q);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d", &s[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+s[i-1][j-1];
    while(q--)
    {
        int x1,x2,y1,y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        cout<<s[x2][y2]-s[x1][y2]-s[x2][y1]+s[x1][y1];
    }
    return 0;
}