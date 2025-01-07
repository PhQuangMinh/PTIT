def solve():
    n = int(input())
    a = []
    for i in range(n):
        a.append(input())
    sum = 0
    for i in range(n):
        dh = 0
        dc = 0
        for j in range(n):
            if a[i][j] == 'C':
                dh += 1
            if a[j][i] == 'C':
                dc += 1
        sum += (dh-1)*dh//2 + (dc-1)*dc//2
    print(sum)
n = 1
for i in range(n):
    solve()