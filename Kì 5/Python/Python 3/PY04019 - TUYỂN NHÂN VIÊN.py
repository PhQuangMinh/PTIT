mod = 1e9+7
class NV:
    def __init__(self, ma, ten, tb) -> None:
        self.ma = ma
        self.ten = ten
        self.tb = tb
        self.xl = self.xel(tb)
    def xel(self, x):
        if x<5:
            return "TRUOT"
        if x<8:
            return "CAN NHAC"
        if x<=9.5:
            return "DAT"
        return "XUAT SAC"
    def __str__(self) -> str:
        return f"{self.ma} {self.ten} {self.tb:.2f} {self.xl}"
def solve():
    n = int(input())
    a = []
    for i in range(n):
        ma = "TS0" + str(i+1)
        name = input()
        d1 = float(input())
        if d1>10:
            d1 /= 10
        d2 = float(input())
        if d2>10:
            d2 /= 10
        a.append(NV(ma, name, (d1+d2)/2))
    a = sorted(a, key=lambda e: (-e.tb))
    for x in a:
        print(x)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()