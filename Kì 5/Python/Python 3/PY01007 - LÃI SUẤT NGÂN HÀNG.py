def solve():
    n, x, m = map(float, input().split())
    x = 1 + x/100
    d = 0
    while n<m:
        n*=x
        d += 1
    print(d)

n = int(input())
for i in range(n):
    solve()