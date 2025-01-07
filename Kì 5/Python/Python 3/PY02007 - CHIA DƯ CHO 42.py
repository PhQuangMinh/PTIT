from collections import defaultdict
import sys
def solve():
    cnt = 0
    mp = defaultdict(int)
    s = sys.stdin.readlines()
    for line in s:
        a = list(map(int, line.split()))
        for i in range(len(a)):
            if mp[a[i]%42] == 0:
                mp[a[i]%42] = 1
                cnt += 1
    print(cnt)

n = 1
for i in range(n):
    solve()
