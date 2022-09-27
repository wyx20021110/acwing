// 给定一个长度为 N 的整数数列，输出每个数左边第一个比它小的数，如果不存在则输出 −1。

// 输入格式
// 第一行包含整数 N，表示数列长度。

// 第二行包含 N 个整数，表示整数数列。

// 输出格式
// 共一行，包含 N 个整数，其中第 i 个数表示第 i 个数的左边第一个比它小的数，如果不存在则输出 −1。

// 数据范围
// 1≤N≤105
// 1≤数列中元素≤109
// 输入样例：
// 5
// 3 4 2 7 5
// 输出样例：
// -1 3 -1 2 2

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int n;
    scanf("%d", &n);
    int q[n];
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    for (int i = 0; i < n; i++)
    {
        while (!s.empty())
        {
            if (q[i] > s.top())
            {
                a[i] = s.top();
                s.push(q[i]);

                break;
            }
            else
            {
                s.pop();
            }
        }
        if (s.empty())
        {
            s.push(q[i]);
            a[i] = -1;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}