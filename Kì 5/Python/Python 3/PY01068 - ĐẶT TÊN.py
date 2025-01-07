from itertools import combinations
mod = 1e9+7
n, k = 0, 0
a = []
def solve():
    global n, k, a, b
    n, k = map(int, input().split())
    a = input().split()
    st = set()
    for x in a:
        st.add(x)
    a = sorted(st)
    a.sort()
    b = []
    for i in range(len(a)):
        b.append(i)
    c = combinations(b, k)
    for x in c:
        for y in x:
            print(a[y], end = ' ')
        print()

n = 1
for i in range(n):
    solve()