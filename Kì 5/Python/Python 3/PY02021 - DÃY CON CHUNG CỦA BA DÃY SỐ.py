from collections import defaultdict
mod = 1e9+7
def solve():
    n, m, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    i = 0
    j = 0
    k = 0
    mp1 = defaultdict(int)
    mp2 = defaultdict(int)
    for x in a:
        mp1[x] += 1
    for x in b:
        mp2[x] += 1
    ok = "NO"
    for x in c:
        if mp1[x]>0 and mp2[x]>0:
            print(x, end = ' ')
            mp1[x] -= 1
            mp2[x] -= 1
            ok = ""
    print(ok)

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()