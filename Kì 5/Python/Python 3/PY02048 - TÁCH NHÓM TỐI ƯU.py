mod = 1e9+7
def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    cnt = 1
    for i in range(1, n):
        if a[i]-a[i-1]>k:
            cnt += 1
    print(cnt)
   

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()