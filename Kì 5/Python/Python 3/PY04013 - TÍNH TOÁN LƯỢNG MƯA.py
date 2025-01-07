from collections import defaultdict
from datetime import datetime
if __name__ == "__main__":
    n = int(input())
    d = 0
    ten = dict()
    mua = dict()
    gio = dict()
    mp = dict()
    format = "%H:%M"
    for i in range(n):
        t = input()
        bd = input()
        kt = input()
        lmua = int(input())
        bd1 = datetime.strptime(bd, format)
        kt1 = datetime.strptime(kt, format)
        giay = (kt1 - bd1).total_seconds()
        if t in ten.values():
            ma = [key for key, value in ten.items() if value == t][0]
            mua[ma] += lmua
            gio[ma] += giay
        else:
            d += 1
            ma = "T{:02d}".format(d)
            ten[ma] = t
            mua[ma] = lmua
            gio[ma] = giay
    for i in range(d):
        ma = "T{:02d}".format(i+1)
        t = ten[ma]
        tb = mua[ma]*3600/gio[ma]
        print(ma, t, "{:.2f}".format(tb))
