from collections import defaultdict
mod = 1e9+7
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mp = defaultdict(int)
    for x in a:
        mp[x] += 1
    for x in a:
        if mp[x]%2==1:
            print(x)
            return

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()