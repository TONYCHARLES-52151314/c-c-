#include <iostream>
#include <unordered_map>
using namespace std;

const int N = 100010;
int a[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    unordered_map<int, int> count; // 记录窗口内元素出现次数
    int res = 0;
    
    // 双指针维护滑动窗口
    for (int i = 0, j = 0; i < n; i++) {
        count[a[i]]++; // 加入当前元素
        
        // 当窗口内有重复元素时，移动左指针
        while (count[a[i]] > 1) {
            count[a[j]]--;
            j++;
        }
        
        // 更新最大长度
        res = max(res, i - j + 1);
    }
    
    printf("%d\n", res);
    return 0;
}