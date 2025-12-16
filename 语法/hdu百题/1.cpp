//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
/*例如输入mkd,输出d m k
 *写入三个字符，算出ascii的值，进行排序   
 */
#include<iostream>
using namespace std;
int main(){
    char a[3];
     for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for(int i=0;i<3;i++)
    {
      for(int j=i;j<3;j++)
      {
        if (a[j] < a[i])
        {
            char m=a[j];//在这里对m初始化***
            a[j]=a[i];
            a[i]=m;
        }
      }
    }
    for (int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//冒泡排序，数组
//改进的地方while去输入