def solve():
    n,m = map(int, input().split())
    a = []
    for i in range(n):
        x = list(map(int, input().split()))
        a.append(x)
    b = []
    for i in range(n):
        x = []
        for j in range(n):
            s = 0
            for k in range(m):
                s += a[i][k]*a[j][k]
            x.append(s)
        b.append(x)
    for i in b:
        for j in i:
            print(j, end = ' ')
        print()

n = int(input())
for i in range(n):
    solve()
