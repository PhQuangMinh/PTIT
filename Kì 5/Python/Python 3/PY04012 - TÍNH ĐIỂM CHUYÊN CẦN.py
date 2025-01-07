from collections import defaultdict
mod = 1e9+7
class SinhVien:
    def __init__(self, masv, ten, lop, cc):
        self.masv = masv
        self.ten = ten
        self.lop = lop
        self.cc = cc
    def __str__(self):
        return f"{self.masv} {self.ten} {self.lop}"
def solve():
    n = int(input())
    a = []
    for i in range(n):
        st = SinhVien(input(), input(), input(), 10)
        a.append(st)
    mp = defaultdict(int)
    for i in range(n):
        x, y = map(str, input().split())
        mp[x] = 10
        for t in y:
            if t == 'm':
                mp[x] -= 1
            else:
                if t == 'v':
                    mp[x] -= 2
        if mp[x] < 0:
            mp[x] = 0
    for sv in a:
        print(sv, mp[sv.masv], end = '')
        if mp[sv.masv]==0:
            print(" KDDK")
        else:
            print()


if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()