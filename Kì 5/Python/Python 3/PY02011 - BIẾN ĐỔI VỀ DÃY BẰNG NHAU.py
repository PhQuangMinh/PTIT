mod = 1e9+7
import bisect
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = sorted(a)
    ans = a[0]
    sans = 1e18
    for i in range(n):
        id = bisect.bisect_left(b, a[i])
        tmp = (a[i]*id-sum(b[:id])) - (a[i]*(n-id)-sum(b[id:]))
        if tmp<sans:
            ans = a[i]
            sans = tmp
    print(sans, ans)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()