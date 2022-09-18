def mergesort(l, r):
    if l >= r:
        return
    mid = int((l+r)//2)
    mergesort(l, mid)
    mergesort(mid+1, r)
    i, j = l, mid+1
    a = []
    while i <= mid and j <= r:
        if q[i] <= q[j]:
            a.append(q[i])
            i += 1
        else:
            a.append(q[j])
            j += 1
    while i <= mid:
        a.append(q[i])
        i += 1
    while j <= r:
        a.append(q[j])
        j += 1
    i = l
    for x in a:
        q[i] = x
        i += 1


n = int(input())
q = list(map(int, input().split()))
mergesort(0, n-1)

for i in q:
    print(i, end=' ')
