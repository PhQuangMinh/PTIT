f = [0]*100
def init():
    f[1] = 1
    f[2] = 1
    for i in range(3, 93):
        f[i] = f[i-1] + f[i-2]
def solve():
    a, b = map(int, input().split())
    for i in range(a, b+1):
        print(f[i], end = ' ')
    print()

n = int(input())
init()
for i in range(n):
    solve()
