#include <iostream>
using namespace std;
const int N = 100010;
int q[N];

void quicksort(int l, int r, int q[])
{
    if (l >= r)
        return;
    int i = l - 1, j = r + 1;
    int mid = q[(l + r) / 2];
    while (i < j)
    {
        do
            i++;
        while (q[i] < mid);
        do
            j--;
        while (q[j] > mid);
        if (i < j)
        {
            int t = q[i];
            q[i] = q[j];
            q[j] = t;
        }
    }
    quicksort(l, j, q);
    quicksort(j + 1, r, q);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    quicksort(0, n - 1, q);
    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
}
