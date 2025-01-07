mod = 1e9+7
from collections import defaultdict
import math
def snt(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x%i==0:
            return False
    return x>1
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mp = defaultdict(int)
    b = []
    for x in a:
        if mp[x] == 0:
            b.append(x)
            mp[x] = 1
    s = sum(b)
    t = 0
    for i in range(len(b)):
        t += b[i]
        if snt(t) and snt(s-t):
            print(i)
            return
    print("NOT FOUND")

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()