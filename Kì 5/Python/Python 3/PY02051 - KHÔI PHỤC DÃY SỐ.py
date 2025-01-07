mod = 1e9+7
def solve():
    n = int(input())
    a = []
    s = 0
    for i in range(n):
        x = list(map(int, input().split()))
        a.append(x)
        s += sum(x)
    s //= (n-1)*2
    for i in range(n):
        tmp = sum(a[i])
        print((tmp-s)//(n-2), end = ' ')

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()