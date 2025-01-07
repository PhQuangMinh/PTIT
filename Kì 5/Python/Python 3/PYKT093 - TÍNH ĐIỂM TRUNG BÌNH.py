class sv:
    def __init__(self, ma, ten, diem):
        self.ma = ma
        self.ten = ten
        self.diem = diem
    def __str__(self):
        return f"{self.ma} {self.ten} {self.diem:.2f}"
def chuan(ten):
    a = ten.strip().lower().split()
    return " ".join(a).title()
if __name__ == "__main__":
    n = int(input())
    a = []
    for i in range(n):
        ma = "SV{:02d}".format(i+1)
        ten = chuan(input())
        diem = (float(input())*3 + float(input())*3 + float(input())*2)/8
        diem = int(diem*100 + 0.5)/100
        a.append(sv(ma, ten, diem))
    a.sort(key=lambda e:(-e.diem, e.ma))
    cnt = 1
    for i in range(n):
        if i>0 and a[i].diem != a[i-1].diem:
            cnt = i+1
        print(a[i], cnt)