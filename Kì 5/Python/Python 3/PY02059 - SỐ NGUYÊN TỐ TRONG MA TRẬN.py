import math
mod = 1e9+7
def snt(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x%i==0:
            return False
    return x>1
def solve():
    n, m = map(int, input().split())
    a = []
    mant = -1
    for i in range(n):
        x = list(map(int, input().split()))
        a.append(x)
        for y in x:
            if snt(y):
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