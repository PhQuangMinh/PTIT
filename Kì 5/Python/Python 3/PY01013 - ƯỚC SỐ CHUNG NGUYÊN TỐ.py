import math

def tcs(n):
    t = 0
    while n>0:
        t += n%10
        n//=10
    return t
def snt(n):
    for i in range (2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    m, n = map(int, input().split())
    uc = math.gcd(m, n)
    if snt(tcs(uc)):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()