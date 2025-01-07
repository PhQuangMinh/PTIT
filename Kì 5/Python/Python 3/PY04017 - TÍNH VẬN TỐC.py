from datetime import datetime
mod = 1e9+7
class KH:
    def __init__(self, ma, ten, que, td) -> None:
        self.ma = ma
        self.ten = ten
        self.que = que
        self.td = td
    def __str__(self) -> str:
        return f"{self.ma} {self.ten} {self.que} {round(self.td)} Km/h"
def solve():
    n = int(input())
    a = []
    for i in range(n):
        ten = input()
        que = input()
        ma = ''
        for x in que.split():
            ma += x[0]
        for x in ten.split():
            ma += x[0]
        h = input()
        c = h.split(':')
        td = 120/(int(c[0])-6 + int(c[1])/60)
        a.append(KH(ma, ten, que, td))
        
    a.sort(key=lambda e:(-e.td))
    for x in a:
        print(x)
if __name__ == "__main__":
    n = 1
    # n = int(input())
    for i in range(n):
        solve()