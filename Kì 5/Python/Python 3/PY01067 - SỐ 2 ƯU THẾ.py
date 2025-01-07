mod = 1e9+7
from queue import Queue
st = []
def check(s):
    cnt = 0
    for x in s:
        if x == '2':
            cnt += 1
    return cnt>len(s)/2
def init():
    q = Queue()
    q.put("1")
    q.put("2")
    while True:
        u = q.get()
        if check(u):
            st.append(int(u))
        if len(st) == 1000:
            break
        q.put(u+"0")
        q.put(u+"1")
        q.put(u+"2")
    st.sort()
def solve():
    n = int(input())
    for i in range(n):
        print(st[i], end = ' ')
    print()

n = 1
n = int(input())
init()
for i in range(n):
    solve()