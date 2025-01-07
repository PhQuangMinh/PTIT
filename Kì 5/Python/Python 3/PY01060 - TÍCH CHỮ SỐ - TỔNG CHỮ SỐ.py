def solve():
    n = input()
    tc = 0
    tl = 1
    ok = False
    for i in range(len(n)):
        if i%2==1:
            tc += int(n[i])
        else:
            if n[i] != '0':
                ok = True
                tl *= int(n[i])
    if ok:
        print(tl, tc)
    else:
        print(0, tc)

n = int(input())
for i in range(n):
    solve()