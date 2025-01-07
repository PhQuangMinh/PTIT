class nv:
    def __init__(self, ma, ten, cq, tien):
        self.ma = ma
        self.ten = ten
        self.cq = cq
        self.tien = tien
    def __str__(self):
        return f"{self.ma} {self.ten} {self.cq} {self.tien}"
def hs(nhom, nam):
    if nhom == "A":
        if nam<4: return 10
        if nam<9: return 12
        if nam<16: return 14
        return 20
    if nhom == "B":
        if nam<4: return 10
        if nam<9: return 11
        if nam<16: return 13
        return 16
    if nhom == "C":
        if nam<4: return 9
        if nam<9: return 10
        if nam<16: return 12
        return 14
    if nhom == "D":
        if nam<4: return 8
        if nam<9: return 9
        if nam<16: return 11
        return 13
if __name__ == "__main__":
    n = int(input())
    mp = dict()
    for i in range(n):
        a = input().split()
        mp[a[0]] = " ".join(a[1:])
    n = int(input())
    for i in range(n):
        ma = input()
        ten = input()
        lcb = int(input())
        ngay = int(input())
        nhom = ma[:1]
        nam = ma[1:3]
        phong = ma[3:]
        luong = lcb*ngay*hs(nhom, int(nam))*1000
        x = nv(ma, ten, mp[phong], luong)
        print(x)
