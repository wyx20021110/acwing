#include <iostream>
using namespace std;
const int N = 100010;
int q[N];
int tmp[N];

void mergesort(int l, int r, int q[])
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergesort(l, mid, q), mergesort(mid + 1, r, q);
    int i = l, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
            tmp[k++] = q[i++];
        else
            tmp[k++] = q[j++];
    }
    while (i <= mid)
        tmp[k++] = q[i++];
    while (j <= r)
        tmp[k++] = q[j++];
    for (i = l, k = 0; i <= r; i++)
    {
        q[i] = tmp[k];
        k++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    mergesort(0, n - 1, q);
    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
}