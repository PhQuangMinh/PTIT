import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    n = input()
    l = len(n)
    if len(n)<=4:
        x = int(n)
    else:
        x = int(n[l-4])*1000 + int(n[l-3])*100 + int(n[l-2])*10 + int(n[l-1])
    if snt(x) == False:
        print("NO")
    else:
        print("YES")

n = int(input())
for i in range(n):
    solve()