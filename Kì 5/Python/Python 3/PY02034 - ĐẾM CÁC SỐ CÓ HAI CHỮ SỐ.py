mod = 1e9+7
from collections import defaultdict
def solve():
    n = input()
    st = []
    mp = defaultdict(int)
    for i in range(0, len(n)//2*2, 2):
        k = int(n[i])*10 + int(n[i+1])
        st.append(k)
        mp[k] += 1
    for k in st:
        if mp[k]>0:
            print(k, mp[k])
            mp[k] = 0

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()