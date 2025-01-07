import sys
mod = 1e9+7
def solve():
    n = int(input())
    a = []
    for line in sys.stdin:
        b = list(map(int, line.split()))
        for x in b:
            a.append(x)
    for i in range(n-1):
        for j in range(i+1, n):
            if a[i]%2==0 and a[j]%2==0 and a[i]>a[j] or a[i]%2==1 and a[j]%2==1 and a[i]<a[j]:
                a[i], a[j] = a[j], a[i]
    for x in a:
        print(x, end = ' ')

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()