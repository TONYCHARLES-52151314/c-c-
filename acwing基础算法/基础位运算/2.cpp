#include<iostream>
using namespace std;
int main()
{
    int x=10;
    unsigned int p=-x;
    for(int i=31;i>=0;i--)
       cout <<(x >> i & 1);

    return 0;
}
