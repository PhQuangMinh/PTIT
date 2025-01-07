from collections import defaultdict
mod = 1e9+7
def solve():
    n = int(input())
    mp = defaultdict(int)
    ok = "No"
    for i in range(n-1):
        x, y = map(int, input().split())
        mp[x] += 1
        mp[y] += 1
        if mp[x] == n-1 or mp[y] == n-1:
            ok = "Yes"
    print(ok)
if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()