mod = 1e9+7
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    ma = max(a)
    d = 0
    ans = 0
    for x in a:
        if x==ma:
            d += 1
        else:
            ans = max(ans, d)
            d = 0
    print(max(ans, d))

   

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()