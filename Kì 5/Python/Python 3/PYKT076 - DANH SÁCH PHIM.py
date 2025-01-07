from datetime import datetime
class Phim:
    def __init__(self, ma, tl, ngay, ten, tap):
        self.ma = ma
        self.tl = tl
        self.ngay = ngay
        self.ten = ten
        self.tap = tap
    def __str__(self) -> str:
        return f"{self.ma} {self.tl} {self.ngay} {self.ten} {self.tap}"
def solve():
    n, m = map(int, input().split())
    mp = dict()
    for i in range(n):
        ma = "TL{:03d}".format(i+1)
        mp[ma] = input()
    a = []
    for i in range(m):
        ma = "P{:03d}".format(i+1)
        tl = mp[input()]
        p = Phim(ma, tl, input(), input(), int(input()))
        a.append(p)
    a.sort(key=lambda x:(datetime.strptime(x.ngay, "%d/%m/%Y"), x.ten, x.tap))
    for x in a:
        print(x)
if __name__ == '__main__':
    t = 1
    # t = int(input())
    for _ in range(t):
        solve()