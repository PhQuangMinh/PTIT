from collections import defaultdict
def solve():
    n = int(input())
    mp = defaultdict(int)
    ans = 0
    cntMax = 0
    for i in range(n):
        x = int(input())
        mp[x] += 1
        if cntMax < mp[x]:
            ans = x
            cntMax = mp[x]
        else:
            if cntMax == mp[x]:
                ans = min(ans, x)
    print(ans)

n = int(input())
for i in range(n):
    solve()