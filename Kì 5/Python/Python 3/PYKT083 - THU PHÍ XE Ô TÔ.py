from collections import defaultdict
class Vehicle:
    def __init__(self, bien, ten, sl, di, date):
        self.bien = bien
        self.ten = ten
        self.sl = sl
        self.di = di
        self.date = date
def cal(x):
    if x.di == "OUT":
        return 0
    if x.ten == "Xe_con":
        if x.sl == 5:
            return 10000
        else:
            return 15000
    if x.ten == "Xe_tai":
        return 20000
    if x.sl == 29:
        return 50000
    return 70000

def solve():
    a = []
    n = int(input())
    mp = defaultdict(int)
    for i in range(n):
        x = input().split()
        st = Vehicle(x[0], x[1], int(x[2]), x[3], x[4])
        mp[st.date] += cal(st)
        a.append(st)
    for x in a:
        if mp[x.date]>=0:
            print(f"{x.date}: {mp[x.date]}")
            mp[x.date] = -1
n = 1
for i in range(n):
    solve()
