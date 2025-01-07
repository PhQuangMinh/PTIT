from collections import defaultdict
mod = 1e9+7
def solve():
    a = input().lower().split()
    b = input().lower().split()
    mp = defaultdict(int)
    sth = set()
    stg = set()
    for x in a:
        mp[x] += 1
        sth.add(x)
    for x in b:
        sth.add(x)
        if mp[x]>0:
            stg.add(x)
    g = sorted(stg)
    h = sorted(sth)
    for i in range (len(h)):
        print(h[i], end = '')
        if i!=len(h)-1:
            print(' ', end = '')
        else:
            print()
    for i in range(len(g)):
        print(g[i], end = '')
        if i!=len(g)-1:
            print(' ', end = '')

n = 1
for i in range(n):
    solve()