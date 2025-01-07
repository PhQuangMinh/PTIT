from collections import defaultdict
import re
def doc(path):
    mp = defaultdict(int)  
    dt1 = []
    with open(path, "r") as f:
        a = f.read().lower().strip()
        w = re.split(r'\s+', a)
        # print(w, a)
        for x in w:
            if mp[x] == 0:
                dt1.append(x)
                mp[x] = 1
    return dt1
def getans(dt1, dt2):
    ans1 = []
    for x in dt1:
        ok = True
        for y in dt2:
            if x == y:
                ok = False
        if ok:
            ans1.append(x)
    return ans1
def solve() :
    dt1 = doc("DATA1.in")
    dt2 = doc("DATA2.in")
    ans1 = getans(dt1, dt2)
    ans2 = getans(dt2, dt1)
    ans1.sort()
    ans2.sort()
    for x in ans1:
        print(x, end = ' ')
    print()
    for x in ans2:
        print(x, end = ' ')
if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()