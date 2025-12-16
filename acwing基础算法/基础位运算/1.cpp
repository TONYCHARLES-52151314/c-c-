#include<iostream>
using namespace std;
int lowbit(int x)
{
    return x & -x ;
}
int main()
{
    int x,k;
    cin>>x;
    while(x--)
    {
        cin >> k;
        int res=0;
        while(k){
            k-= lowbit(k);
            res++;
        }
        cout << res <<" ";
        
    }
    return 0;
}
