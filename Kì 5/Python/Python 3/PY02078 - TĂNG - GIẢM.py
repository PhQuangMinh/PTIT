mod = 1e9+7
def solve():
    n = int(input())
    a = []
    b = []
    for i in range(n):
        x, y = map(float, input().split())
        a.append(x)
        b.append(y)
    d = [1]*(n+1)
    d[0] = 1
    for i in range(1, n):
        for j in range(0, i):
            if a[i]>a[j] and b[i]<b[j]:
                d[i] = max(d[i], d[j]+1)
    print(max(d))

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()