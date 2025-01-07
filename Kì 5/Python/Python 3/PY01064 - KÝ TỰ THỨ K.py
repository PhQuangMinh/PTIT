mod = 1e9+7
f = [0]*30
def init():
    f[1] = 1
    for i in range(2, 27):
        f[i] = f[i-1]*2+1
def cal(n, k):
    if n == 1:
        return 'A'
    if k<f[n-1]+1:
        return cal(n-1, k)
    if k>f[n-1]+1:
        return cal(n-1, k-1-f[n-1])
    return chr(n+64)
def solve():
    n, k = map(int, input().split())
    print(cal(n, k))

n = int(input())
init()
for i in range(n):
    solve()