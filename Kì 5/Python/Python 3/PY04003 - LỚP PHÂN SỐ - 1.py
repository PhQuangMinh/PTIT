import math
def solve():
    a, b = map(int, input().split())
    uc = math.gcd(a, b)
    a //= uc
    b //= uc
    print(f"{a}/{b}")
n = 1
for i in range(n):
    solve()
