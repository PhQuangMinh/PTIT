mod = 1e9+7
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    ans = a[n-3]*a[n-2]*a[n-1]
    ans = max(ans, a[0]*a[1]*a[n-1])
    ans = max(ans, a[0]*a[1])
    ans = max(ans, a[n-2]*a[n-1])
    print(ans)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()