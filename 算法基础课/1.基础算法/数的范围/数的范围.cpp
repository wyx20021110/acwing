#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (q--)
    {
        int x;
        cin >> x;
        int i = 0, j = n - 1;
        while (i < j)
        {
            int mid = i + j >> 1;
            if (a[mid] < x)

                i = mid + 1;
            else
                j = mid;
        }
        if (a[i] != x)
        {
            cout << "-1 -1" << endl;
            continue;
        }
        cout << i << ' ';
        i = 0;
        j = n - 1;

        while (i < j)
        {
            int mid = i + j + 1 >> 1;
            if (a[mid] <= x)
                i = mid;
            else
                j = mid - 1;
        }
        cout << i << endl;
    }
}
