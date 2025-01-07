from datetime import datetime
class SV:
    def __init__(self, ma, ngaythi, giothi, phong):
        self.ma = ma
        self.ngaythi = ngaythi
        self.giothi = giothi
        self.phong = phong
    def __str__(self) -> str:
        return f"{self.ma} {self.ngaythi} {self.giothi} {self.phong}"
def solve() :
    with open("CATHI.in", "r") as f:
        n = int(f.readline())
        a = []
        for i in range(n):
            ma = "C{:03d}".format(i+1)
            sv = SV(ma, f.readline().strip(), f.readline().strip(), f.readline().strip())
            a.append(sv)
    a.sort(key=lambda e:(datetime.strptime(e.ngaythi, "%d/%m/%Y"), e.giothi, e.ma))
    for x in a:
        print(x)

if __name__ == "__main__":
    n = 1
    # n = int(input())
    for i in range(n):
        solve()