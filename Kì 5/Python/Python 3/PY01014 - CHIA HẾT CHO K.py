def solve():
    a, k, n = map(int, input().split())
    d = (a+k-1)//k*k
    if d==a:
        d += k
    c = n//k*k
    ok = False
    for i in range(d, c+1, k):
        ok = True
        print(i-a, end = ' ')
    if ok == False:
        print(-1)
n = 1
for i in range(n):
    solve()