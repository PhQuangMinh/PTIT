mod = 1e9+7
vs = [0]*400
a = []
def dfs(x):
    global vs
    for t in a[x]:
        if vs[t] == 0:
            vs[t] = 1
            dfs(t)
def solve():
    global a
    global vs
    n, m, tmp = map(int, input().split())
    a = [[] for _ in range(n+1)]
    for i in range(m):
        x, y = map(int, input().split())
        a[x].append(y)
        a[y].append(x)
    # for i in range(len(a)):
    #     for y in a[i]:
    #         print(y, end = ' ')
    #     print()
    vs[tmp] = 1
    dfs(tmp)
    for i in range(1, n+1):
        if vs[i] == 0:
            print(i)
    

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()