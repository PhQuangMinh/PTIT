import math
def solve():
    n = int(input())
    print("1 ", end = '')
    for i in range(2, int(math.sqrt(n))+1):
        if (n%i==0):
            d = 0
            while(n%i==0):
                d += 1
                n = n//i
            print(f"* {i}^{d} ", end = '')
    if n>1:
        print(f"* {n}^{1}")
    else:
        print()

n = int(input())
for i in range(n):
    solve()