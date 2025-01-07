from functools import cmp_to_key
class user:
    def __init__(self, ngay, ten, sdt):
        self.ngay = ngay
        self.ten = ten
        self.sdt = sdt
        pass
    def __str__(self):
        return f"{self.ten}: {self.sdt} {self.ngay}"
def cmp(u1, u2):
    tmp1 = u1.ten.split()
    tmp2 = u2.ten.split()
    if u1.ten[-1]!=u2.ten[-1]:
        if u1.ten[-1]>u2.ten[-1]:
            return 1
        if u1.ten[-1]<u2.ten[-1]:
            return -1
    tmp3 = " ".join(u1.ten[:-1])
    tmp4 = " ".join(u2.ten[:-1])
    if tmp3>tmp4:
        return 1
    if tmp3<tmp4:
        return -1
    return 0
if __name__ == "__main__":
    mp = dict()
    a = []
    with open("SOTAY.txt", "r") as file:
        cnt = 0
        for line in file:
            tmp = line.strip()
            a.append(tmp)
            cnt += 1
    d = 0
    ans = []
    tmp = a[0][5:]
    i = 1
    while True:
        while i<len(a) and a[i][:4] != "Ngay":
            if i+1>=len(a):
                break
            ans.append(user(tmp, a[i], a[i+1]))
            i+=2
        if i<len(a):
            tmp = a[i][5:]
            i+=1
        if i>=len(a):
            break
    ans.sort(key=cmp_to_key(cmp))
    with open("DIENTHOAI.txt", "w") as file:
        for x in ans:
            file.write(str(x) + "\n")



