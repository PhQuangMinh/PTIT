import math
def solve():
    n, k = map(int, input().split())
    d = 10 ** (k-1)
    c = 10 ** (k)
    cnt = 0
    for i in range(d, c):
        if math.gcd(n, i) == 1:
            print(i, end = ' ')
            cnt += 1
        if cnt == 10:
            print()
            cnt = 0

n = 1
for i in range(n):
    solve()