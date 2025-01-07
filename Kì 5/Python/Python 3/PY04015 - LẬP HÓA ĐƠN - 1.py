class Customer:
    def __init__(self, ma, ten, dien):
        self.ma = ma
        self.ten = ten
        self.dien = dien
    def __str__(self):
        return f"{self.ma} {self.ten} {self.dien}"
def cal(d):
    ans = d
    if d<=50:
        ans*= 100
        ans += ans*0.02
        return round(ans)
    if d<=100:
        ans = 50*100 + (d-50)*150
        ans += ans*0.03
        return round(ans)
    ans = 50 * 100 + 50 * 150 + (d - 100) * 200
    return round(ans + ans*0.05)
if __name__ == '__main__':
    n = int(input())
    a = []
    d = 0
    for i in range(n):
        name = input()
        ma = "KH{:02d}".format(i+1)
        dc = int(input())
        dm = int(input())
        a.append(Customer(ma, name, cal(dm-dc)))
    b = sorted(a, key=lambda x:(-x.dien, x.ma))
    for x in b:
        print(x)