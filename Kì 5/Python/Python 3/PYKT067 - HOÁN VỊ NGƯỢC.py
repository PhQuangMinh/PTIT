import copy
mod = 1e9+7
vs = []
ans = []
n = 1
a = []
def hv(x):
    for i in range(n, 0, -1):
        if vs[i] == 0:
            vs[i] = 1
            a.append(i)
            # print(len(a), a)
            if len(a) == n:
                tmp = copy.copy(a)
                ans.append(tmp)
            else:
                hv(x+1)
            a.pop()
            vs[i] = 0

def solve():
    global vs, n 
    n = int(input())
    vs = [0]*15
    ans.clear()
    a.clear()
    hv(1)
    print(len(ans))
    for i in range(len(ans)):
        for x in ans[i]:
            print(x, end = '')
        print(end = ' ')
    print()

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()