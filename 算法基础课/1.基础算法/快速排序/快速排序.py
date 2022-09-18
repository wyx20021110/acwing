def quicksort(q):
    if len(q)<2:
        return q
    a = []
    b = []
    x = q[len(q)//2]
    q.remove(x)
    for i in q:
        if i<=x:
            a.append(i)
        else:
            b.append(i)
    return quicksort(a) + [x] +quicksort(b) 


n = int(input())
q = list(map(int,input().split()))
q = quicksort(q)

for i in q:
    print(i,end=' ')
