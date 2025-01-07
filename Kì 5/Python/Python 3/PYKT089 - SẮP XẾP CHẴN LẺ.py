def solve():
    n = int(input())
    a = []
    while True:
        s = input()
        x = list(map(int, s.split()))
        for t in x:
            a.append(t)
        if len(a) == n:
            break
    for i in range(n-1):
        for j in range(i+1, n):
            if a[i]%2==0 and a[j]%2==0 and a[i]>a[j]:
                a[i], a[j] = a[j], a[i]
            if a[i]%2==1 and a[j]%2==1 and a[i]<a[j]:
                a[i], a[j] = a[j], a[i]
    for x in a:
        print(x, end = " ")  
    
n = 1
for i in range(n):
    solve()