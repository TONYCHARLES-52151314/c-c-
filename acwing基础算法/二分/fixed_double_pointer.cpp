#include<iostream>
#include<unordered_map>
using namespace std;

const int N = 100010;
int a[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // 正确的双指针实现
    int max_len = 0;
    unordered_map<int, int> hash; // 记录元素最后出现的位置
    
    for (int i = 0, j = 0; i < n; i++)
    {
        // 如果当前元素已经在窗口中出现过，移动左指针到重复元素的下一个位置
        if (hash.count(a[i]))
            j = max(j, hash[a[i]] + 1);
        
        // 更新元素最后出现的位置
        hash[a[i]] = i;
        
        // 计算当前窗口长度并更新最大值
        max_len = max(max_len, i - j + 1);
    }
    
    printf("%d\n", max_len);
    return 0;
}