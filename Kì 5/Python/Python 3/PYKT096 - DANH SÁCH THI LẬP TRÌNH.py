class doi:
    def __init__(self, ten, truong):
        self.ten = ten
        self.truong = truong
        pass
class sv:
    def __init__(self, ma, ten, doi, truong):
        self.ma = ma
        self.ten = ten
        self.doi = doi
        self.truong = truong
        pass
    def __str__(self):
        return f"{self.ma} {self.ten} {self.doi} {self.truong}"
if __name__ == "__main__":
    n = int(input())
    mp = dict()
    for i in range(n):
        ma = "Team{:02d}".format(i+1)
        mp[ma] = doi(input(), input())
    n = int(input())
    a = []
    for i in range(n):
        ma = "C{:03d}".format(i+1)
        ten = input()
        te = input()
        a.append(sv(ma, ten, mp[te].ten, mp[te].truong))
    a.sort(key=lambda e:(e.ten))
    for x in a:
        print(x)


        