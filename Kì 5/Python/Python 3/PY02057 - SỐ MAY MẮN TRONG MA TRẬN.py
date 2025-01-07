mod = 1e9+7
def solve():
    n, m = map(int, input().split())
    a = []
    maxa = -1
    mina = mod
    for i in range(n):
        x = list(map(int, input().split()))
        a.append(x)
        for y in x:
            maxa = max(maxa, y)
            mina = min(mina, y)
    ans = maxa - mina
    b = []
    for i in range(n):
        for j in range(m):
            if a[i][j] == ans:
                b.append([i, j])
    if len(b) == 0:
        print("NOT FOUND")
        return  
    print(ans)
    for x in b:
        print(f"Vi tri [{x[0]}][{x[1]}]")
    

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()