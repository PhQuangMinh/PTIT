import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if (n%i==0):
            return False
    return n > 1
def solve():
    n = int(input())
    cnt = 0
    for i in range(1, n):
        if (math.gcd(i, n) == 1):
            cnt += 1
    if snt(cnt):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()