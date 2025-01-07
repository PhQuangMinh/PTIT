import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    n = input()
    l = len(n)
    d = int(n[0])*100 + int(n[1])*10 + int(n[2])
    c = int(n[l-3])*100 + int(n[l-2])*10 + int(n[l-1])
    if snt(d) and snt(c):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()