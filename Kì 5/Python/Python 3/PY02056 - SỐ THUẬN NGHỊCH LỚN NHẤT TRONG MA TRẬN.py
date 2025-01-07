import math
mod = 1e9+7
def stn(x):
    s = str(x)
    p = s[::-1]
    return s == p and x>10
def solve():
    n, m = map(int, input().split())
    a = []
    mant = -1
    for i in range(n):
        x = list(map(int, input().split()))
        a.append(x)
        for y in x:
            if stn(y):
                mant = max(mant, y)
    if mant == -1:
        print("NOT FOUND")
        return
    b = []
    for i in range(n):
        for j in range(m):
            if a[i][j] == mant:
                b.append([i, j])
    print(mant)
    for x in b:
        print(f"Vi tri [{x[0]}][{x[1]}]")
    

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()