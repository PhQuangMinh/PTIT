import math
def snt(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return n>1
def solve():
    n = input()
    if snt(len(n)) == False:
        print("NO")
        return
    cnt = 0
    for i in range(len(n)):
        if snt(int(n[i])):
            cnt += 1
    if 2*cnt > len(n):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()