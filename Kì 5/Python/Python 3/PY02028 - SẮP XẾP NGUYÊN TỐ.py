mod = 1e9+7
import math
def snt(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x%i==0:
            return False
    return True
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n-1):
        for j in range(i+1, n):
            if snt(a[i]) and snt(a[j]) and a[i]>a[j]:
                a[i], a[j] = a[j], a[i]
    for x in a:
        print(x, end = ' ')
if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()