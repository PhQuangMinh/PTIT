mod = 1e9+7
class NV:
    def __init__(self, ma, ten, tg) -> None:
        self.ma = ma
        self.ten = ten
        self.tg = tg
    def __str__(self) -> str:
        return f"{self.ma} {self.ten} {self.tg//60} gio {self.tg%60} phut"
def cv(g):
    return (int(g[0])*10 + int(g[1]))*60 + (int(g[3])*10 + int(g[4]))

def solve():
    n = int(input())
    a = []
    for i in range(n):
        ma = input()
        name = input()
        g1 = input()
        g2 = input()
        x = cv(g2) - cv(g1)
        a.append(NV(ma, name, x))
    a = sorted(a, key=lambda e: (-e.tg))
    for x in a:
        print(x)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()