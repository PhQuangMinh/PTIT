from datetime import datetime
class mon:
    def __init__(self, ten, ht):
        self.ten = ten
        self.ht = ht
        pass
class cathi:
    def __init__(self, giothi, id):
        self.giothi = giothi
        self.id = id
        pass
class lich:
    def __init__(self, ma, gio, id, ten, nhom, sv):
        self.ma = ma
        self.gio = gio
        self.id = id 
        self.ten = ten
        self.nhom = nhom
        self.sv = sv
        pass
    def __str__(self):
        return f"{self.gio.strftime('%d/%m/%Y %H:%M')} {self.id} {self.ten} {self.nhom} {self.sv}"
if __name__ == "__main__":
    mt = dict()
    with open("MONTHI.in") as file:
        n = int(file.readline().strip())
        for i in range(n):
            ma = file.readline().strip()
            ten = file.readline().strip()
            ht = file.readline().strip()
            mt[ma] = mon(ten, ht)
    ct = dict()
    with open("CATHI.in") as file:
        n = int(file.readline().strip())
        for i in range(n):
            ma = "C{:03d}".format(i+1)
            ngay = file.readline().strip()
            gio = file.readline().strip()
            id = file.readline().strip()
            ct[ma] = cathi(datetime.strptime(ngay + " " + gio, "%d/%m/%Y %H:%M"), id)
    a = []
    with open("LICHTHI.in") as file:
        n = int(file.readline().strip())
        for i in range(n):
            tmp = file.readline().strip().split()
            a.append(lich(tmp[0], ct[tmp[0]].giothi, ct[tmp[0]].id, mt[tmp[1]].ten, tmp[2], tmp[3]))
        a.sort(key=lambda e:(e.gio, e.ma))
        for x in a:
            print(x)


        