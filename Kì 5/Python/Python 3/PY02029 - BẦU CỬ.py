mod = 1e9+7
from collections import defaultdict
def solve():
    m, n = map(int, input().split())
    a = list(map(int, input().split()))
    mp = defaultdict(int)
    for x in a:
        mp[x] += 1
    ma = max(mp.values())
    ans = 0
    max_ans = 0
    for i in range(1, n+1):
        if mp[i]>0 and mp[i]>max_ans and mp[i]<ma:
            ans = i
            max_ans = mp[i]
    if max_ans == 0:
        print("NONE")
    else:
        print(ans)
if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()