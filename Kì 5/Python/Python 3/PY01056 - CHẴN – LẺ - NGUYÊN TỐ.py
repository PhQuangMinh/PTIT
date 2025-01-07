import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def tcs(n):
    d = 0
    for x in n:
        d += int(x)
    return d
def isValid(n):
    if snt(tcs(n)) == False:
        return False
    for i in range(0, len(n)):
        if i%2 != int(n[i])%2:
            return False
    return True
def solve():
    n = input()
    if isValid(n) == False:
        print("NO")
    else:
        print("YES")

n = int(input())
for i in range(n):
    solve()