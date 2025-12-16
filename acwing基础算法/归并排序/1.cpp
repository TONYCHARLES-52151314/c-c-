#include<iostream>
using namespace std;
const int N=1e9;
int a[N],temp[N];
void merge_sort(int a[],int l,int r)
{
    int k=0;
    if (l>=r)   return ;
    int mid=l+r>>1;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    int i=l,j=mid+1;
    if(a[i]<=a[j])   temp[k++]=a[i++];
    else    temp[k++]=a[j++];
    while(i<mid)    temp[k++]=a[i++];
    while(j<r)  temp[k++]=a[j++];
    
    for(int i=0;i<k;i++)
        a[i]=temp[i];
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    
    for(int i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
    
}