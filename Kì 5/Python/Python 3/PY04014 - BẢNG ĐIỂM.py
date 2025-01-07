import functools
class Student:
    def __init__(self, ma, name, avg, loai):
        self.ma = ma
        self.name = name
        self.avg = avg
        self.loai = loai
    def __str__(self):
        return f"{self.ma} {self.name} {self.avg:.1f} {self.loai}"
def xl(x):
    if x>=9:
        return "XUAT SAC"
    else:
        if x>=8:
            return "GIOI"
        else:
            if x>=7:
                return "KHA"
            else:
                if x>=5:
                    return "TB"
    return "YEU"
n = int(input())
st = []
for i in range(n):
    name = input()
    a = list(map(float, input().split()))
    s = sum(a) + a[0] + a[1]
    s = round(s/12 + 0.01, 1)
    id = 'HS{:02}'.format(i + 1)
    st.append(Student(id, name, s, xl(s)))
st.sort(key=lambda e:(-e.avg, e.ma))
for x in st:
    print(x)