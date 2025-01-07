from datetime import datetime
mod = 1e9+7
class KH:
    def __init__(self, ma, ten, phong, ngay, tong) -> None:
        self.ma = ma
        self.ten = ten
        self.phong = phong
        self.ngay = ngay
        self.tong = tong
    def __str__(self) -> str:
        return f"{self.ma} {self.ten} {self.phong} {self.ngay} {self.tong}"
def gia(g):
    if g == '1':
        return 25
    if g == '2':
        return 34
    if g == '3':
        return 50
    return 80
    
def solve():
    n = int(input())
    date_format = "%d/%m/%Y"
    a = []
    for i in range(n):
        ma = "KH{:02d}".format(i+1)
        ten = input().strip()
        phong = input().strip()
        den = datetime.strptime(input().strip(), date_format)
        di = datetime.strptime(input().strip(), date_format)
        delta = (di - den).days + 1
        phi = int(input().strip())
        a.append(KH(ma, ten, phong, delta, delta*gia(phong[0])+phi))
    a.sort(key=lambda e:(-e.tong))
    for x in a:
        print(x)
if __name__ == "__main__":
    n = 1
    # n = int(input())
    for i in range(n):
        solve()