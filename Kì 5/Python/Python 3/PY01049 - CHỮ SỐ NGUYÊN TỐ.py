import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    n = input()
    if snt(len(n)):
        d = 0
        for x in n:
            if snt(int(x)):
                d += 1
        if 2*d > len(n):
            print("YES")
        else:
            print("NO")
        return
    print("NO")

n = int(input())
for i in range(n):
    solve()