#include<iostream>
#include<unordered_map>
using namespace std;
const int N=10010;
int a[N];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    unordered_map<int, int> pos; // 记录每个元素最后出现的位置
    int max_len = 0;
    
    // 滑动窗口，j为右指针，i为左指针
    for(int i=0, j=0; j<n; j++)
    {
        // 如果当前元素已经在窗口中出现过，更新左指针位置
        if(pos.find(a[j]) != pos.end())
        {
            // 确保左指针只会向右移动，不会回退
            i = max(i, pos[a[j]] + 1);
        }
        
        // 更新当前元素的位置
        pos[a[j]] = j;
        
        // 更新最大长度
        max_len = max(max_len, j - i + 1);
    }
    
    printf("%d\n", max_len);
    return 0;
}