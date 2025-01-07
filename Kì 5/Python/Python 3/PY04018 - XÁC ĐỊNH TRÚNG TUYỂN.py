from datetime import datetime
mod = 1e9+7
class GV:
    def __init__(self, ma, ten, mon, diem, loai) -> None:
        self.ma = ma
        self.ten = ten
        self.mon = mon
        self.diem = diem
        self.loai = loai
    def __str__(self) -> str:
        return f"{self.ma} {self.ten} {self.mon} {self.diem:.1f} {self.loai}"
def getMon(x):
    if x == 'A':
        return "TOAN"
    if x == 'B':
        return "LY"
    return "HOA"
def solve():
    d = [2.0, 1.5, 1.0, 0.0]    
    n = int(input())
    a = []
    for i in range(n):
        ten = input()
        maxt = input()
        ma = "GV{:02d}".format(i+1)
        diem = float(input())*2 + float(input()) + d[int(maxt[1])-1]
        mon = getMon(maxt[0])
        xt = ""
        if diem>=18:
            xt = "TRUNG TUYEN"
        else:
            xt = "LOAI"
        a.append(GV(ma, ten, mon, diem, xt))
    a.sort(key=lambda e:(-e.diem))
    for x in a:
        print(x)
if __name__ == "__main__":
    n = 1
    # n = int(input())
    for i in range(n):
        solve()