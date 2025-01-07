import math
def solve():
    a = int(input())
    b = int(input())
    print(math.gcd(a, b))

n = int(input())
for i in range(n):
    solve()
