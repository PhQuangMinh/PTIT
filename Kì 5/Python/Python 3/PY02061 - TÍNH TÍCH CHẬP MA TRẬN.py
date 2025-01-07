def solve():
    n, m = map(int, input().split())
    a = []
    for i in range(n):
        x = list(map(int, input().split()))
        a.append(x)
    b = []
    for i in range(3):
        x = list(map(int, input().split()))
        b.append(x)
    sum = 0
    for i in range(n-2):
        for j in range(m-2):
            x = 0
            for i1 in range(3):
                for j1 in range(3):
                    x += a[i+i1][j+j1]*b[i1][j1]
            # print(x, end = ' ')
            sum += x
    print(sum)
n = int(input())
for i in range(n):
    solve()
