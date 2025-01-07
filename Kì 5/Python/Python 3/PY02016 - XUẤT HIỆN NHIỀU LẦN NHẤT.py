from collections import defaultdict
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mp = defaultdict(int)
    cntMax = 0
    ans = 0
    for x in a:
        mp[x] += 1
        if cntMax < mp[x]:
            ans = x
            cntMax = mp[x]
        else:
            if cntMax == mp[x]:
                ans = min(ans, x)
    if cntMax > n/2:
        print(ans)
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()
