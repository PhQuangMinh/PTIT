import math
def solve():
    s = input()
    t = s[::-1]
    n = len(s)
    for i in range(1, n-1):
        if abs(ord(s[i])-ord(s[i-1])) != abs(ord(t[i])-ord(t[i-1])):
            print("NO")
            return
    print("YES")
    

n = int(input())
for i in range(n):
    solve()