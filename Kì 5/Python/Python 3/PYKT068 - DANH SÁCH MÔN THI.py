mod = 1e9+7
class Subject:
    def __init__(self, ma, ten, thi):
        self.ma = ma
        self.ten = ten
        self.thi = thi
    def __str__(self):
        return f"{self.ma} {self.ten} {self.thi}"
def solve():
    n = int(input())
    a = []
    for i in range(n):
        sb = Subject(input(), input(), input())
        a.append(sb)
    a.sort(key=lambda x:(x.ma))
    for x in a:
        print(x)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()