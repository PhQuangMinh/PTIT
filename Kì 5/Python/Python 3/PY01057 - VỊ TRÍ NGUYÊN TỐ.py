import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def isValid(n):
    for i in range(0, len(n)):
        if snt(i) != snt(int(n[i])):
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