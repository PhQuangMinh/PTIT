from collections import defaultdict
def solve():
    n = input()
    mp = defaultdict(int)
    d = 0
    for i in range (len(n)):
        if i>=2:
            if n[i]!=n[i-2]:
                print("NO")
                return
        mp[n[i]] += 1
        if mp[n[i]] == 1:
            d += 1
    if d!=2:
        print("NO")
        return
    print("YES")

n = int(input())
for i in range(n):
    solve()