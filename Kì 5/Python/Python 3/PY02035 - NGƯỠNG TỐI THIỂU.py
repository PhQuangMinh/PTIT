mod = 1e9+7
from collections import defaultdict
def solve():
    n = input()
    tmp = int(input())
    st = []
    mp = defaultdict(int)
    for i in range(0, len(n)//2*2, 2):
        k = int(n[i])*10 + int(n[i+1])
        st.append(k)
        mp[k] += 1
    b = []
    for k in st:
        if mp[k]>=tmp:
            b.append([k, mp[k]])
            mp[k] = 0
    b.sort(key=lambda x:(x[0]))
    ok = False
    for x in b:
        print(x[0], x[1])
        ok = True
    if ok == False:
        print("NOT FOUND")
if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()