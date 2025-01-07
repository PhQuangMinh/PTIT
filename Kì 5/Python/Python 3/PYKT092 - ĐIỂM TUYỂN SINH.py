import re
class sv:
    def __init__(self, ma, ten, diem, kq):
        self.ma = ma
        self.ten = ten
        self.diem = diem
        self.kq = kq
    def __str__(self):
        return f"{self.ma} {self.ten} {self.diem:.1f} {self.kq}"
def chuan(ten):
    w = ten.strip().lower().split()
    return " ".join(w).title()
def dt(dt):
    if (dt.lower() == "kinh"):
        return 0
    return 1.5
def kv(kv):
    if (kv=="1"):
        return 1.5
    if (kv=="2"):
        return 1
    return 0
def kq(diem):
    if (diem<20.5):
        return "Truot"
    return "Do"
if __name__ == "__main__":
    n = int(input())
    a = []
    for i in range(n):
        ma = "TS{:02d}".format(i+1)
        ten = chuan(input())
        diem = float(input())
        ut = dt(input()) + kv(input())
        diem += ut
        a.append(sv(ma, ten, diem, kq(diem)))
    a.sort(key=lambda e: (-e.diem, e.ma))
    for x in a:
        print(x)
