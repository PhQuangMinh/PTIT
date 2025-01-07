from datetime import datetime
mod = 1e9+7
class DH:
    def __init__(self, ma, ten, sl, dg, ck, tong) -> None:
        self.ma = ma
        self.ten = ten
        self.sl = sl
        self.dg = dg
        self.ck = ck
        self.tong = tong
    def __str__(self) -> str:
        return f"{self.ma} {self.ten} {self.sl} {self.dg} {self.ck} {self.tong}"
def solve():
    n = int(input())
    a = []
    for i in range(n):
        ma = input()
        ten = input()
        sl = int(input())
        dg = int(input())
        ck = int(input())
        tong = sl*dg - ck
        a.append(DH(ma, ten, sl, dg, ck, tong))
    a.sort(key=lambda e:(-e.tong))
    for x in a:
        print(x)
if __name__ == "__main__":
    n = 1
    # n = int(input())
    for i in range(n):
        solve()