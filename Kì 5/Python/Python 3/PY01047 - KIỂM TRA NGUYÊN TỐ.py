import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    n = input()
    x = 0
    l = len(n)
    if len(n)<=4:
        x = int(n)
    else:
        x = 1000*int(n[l-4]) + 100*int(n[l-3]) + 10*int(n[l-2]) + int(n[l-1])
    if snt(x):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()