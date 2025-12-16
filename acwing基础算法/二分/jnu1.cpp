#include<iostream>
using namespace std;
const int N=1e5+10;
int a[N],b[N];
int main()
{
    int n,q;

    scanf("%d%d",&n,&q);
    int m = q;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(q--)
    {
        int x;
        scanf("%d",&x);
        int l=0,r=n-1;

        while (l < r)
        {
            int mid = l + r >> 1;
            if (a[mid] > x) r = mid;
            else l = mid + 1;
        }
        if (a[l] <= x) b[q]=-1;
        else b[q]=a[l];
    }
    for(int i = m-1; i >= 0; i--)
        cout << b[i] << endl;
    return 0;
}