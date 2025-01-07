import math
def solve():
    n = int(input())
    x = n
    t = 0
    while (x>0):
        t += math.factorial(x%10)
        x //= 10
    if t == n:
        print("Yes")
    else:
        print("No")

n = int(input())
for i in range(n):
    solve()