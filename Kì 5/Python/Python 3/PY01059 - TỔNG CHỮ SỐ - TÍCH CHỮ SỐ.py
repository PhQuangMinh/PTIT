def solve():
    n = input()
    tc = 0
    tl = 1
    ok = False
    for i in range(len(n)):
        if i%2==0:
            tc += int(n[i])
        else:
            if n[i] != '0':
                ok = True
                tl *= int(n[i])
    if ok:
        print(tc, tl)
    else:
        print(tc, 0)

n = int(input())
for i in range(n):
    solve()