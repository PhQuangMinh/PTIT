from datetime import datetime
class Phim:
    def __init__(self, ma, mamon, ten, ngay, gio, nhom):
        self.ma = ma
        self.mamon = mamon
        self.ten = ten
        self.ngay = ngay
        self.gio = gio
        self.nhom = nhom
    def __str__(self) -> str:
        return f"{self.ma} {self.mamon} {self.ten} {self.ngay} {self.gio} {self.nhom}"
def solve():
    n, m = map(int, input().split())
    mp = dict()
    for i in range(n):
        ma = input()
        mp[ma] = input()
    a = []
    for i in range(m):
        ma = "T{:03d}".format(i+1)
        mamon, ngay, gio, nhom = map(str, input().split())
        p = Phim(ma, mamon, mp[mamon], ngay, gio, nhom)
        a.append(p)
    a.sort(key=lambda x:(datetime.strptime(x.ngay, "%d/%m/%Y"), x.gio, x.ma))
    for x in a:
        print(x)
if __name__ == '__main__':
    t = 1
    # t = int(input())
    for _ in range(t):
        solve()