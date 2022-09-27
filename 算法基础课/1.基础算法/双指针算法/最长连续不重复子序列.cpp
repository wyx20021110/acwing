// 给定一个长度为 n 的整数序列，请找出最长的不包含重复的数的连续区间，输出它的长度。

// 输入格式
// 第一行包含整数 n。

// 第二行包含 n 个整数（均在 0∼105 范围内），表示整数序列。

// 输出格式
// 共一行，包含一个整数，表示最长的不包含重复的数的连续区间的长度。

// 数据范围
// 1≤n≤105
// 输入样例：
// 5
// 1 2 2 3 5
// 输出样例：
// 3

#include <iostream>
using namespace std;
const int N = 100010;
int s[N];
int main()
{
    int n;
    scanf("%d", &n);
    int q[n];
    int res = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
        s[q[i]]++;
        while (s[q[i]] > 1)
        {
            s[q[j]]--;
            j++;
        }
        res = max(res, i - j + 1);
    }
    cout << res << endl;
}