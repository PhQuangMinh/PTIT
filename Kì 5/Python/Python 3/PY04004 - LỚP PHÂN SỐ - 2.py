import math
def solve():
    a, b, c, d = map(int, input().split())
    t = a*d + b*c
    m = b*d
    uc = math.gcd(t, m)
    print(f"{t//uc}/{m//uc}")

n = 1
for i in range(n):
    solve()
