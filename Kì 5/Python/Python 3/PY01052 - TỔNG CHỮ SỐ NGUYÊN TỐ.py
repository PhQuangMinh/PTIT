import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    n = input()
    d = 0
    for x in n:
        d += int(x)
    if snt(d):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()