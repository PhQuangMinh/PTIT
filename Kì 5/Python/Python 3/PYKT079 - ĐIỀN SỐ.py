from collections import defaultdict
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    d = min(a)
    c = max(a)
    mp = defaultdict(int)
    cnt = 0
    for x in a:
        mp[x] += 1
        if mp[x] == 1:
            cnt += 1
    print(c-d+1-cnt)
n = int(input())
for i in range(n):
    solve()