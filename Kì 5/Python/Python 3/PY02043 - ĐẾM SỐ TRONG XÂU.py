import string
def solve():
    n = input()
    m = input()
    idx = -1
    cnt = 0
    while True:
        if idx == -1:
            idx = n.find(m)
        else:
            idx = n.find(m, idx + len(m), len(n))
        if idx != -1:
            cnt += 1
        if idx == -1 or idx + len(m) >= len(n):
            print(cnt)
            return
n = int(input())
for i in range(n):
    solve()
