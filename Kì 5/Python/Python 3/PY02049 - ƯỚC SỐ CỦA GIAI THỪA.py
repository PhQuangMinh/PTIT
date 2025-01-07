def solve() :
    n, p = map(int, input().split())
    ans = 0
    while n>0:
        ans += n//p
        n//=p
    print(ans)

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()