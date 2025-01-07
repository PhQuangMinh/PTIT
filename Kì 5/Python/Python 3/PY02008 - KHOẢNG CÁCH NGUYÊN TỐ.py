import math
def snt(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x%i==0:
            return False
    return x>1
def solve():
    n, x = map(int, input().split())
    d = 0
    cnt = 0
    print(x, end = ' ')
    while True:
        d += 1
        if snt(d):
            x = x + d
            print(x, end = ' ')
            cnt += 1
        if cnt == n:
            return

n = 1
for i in range(n):
    solve()
