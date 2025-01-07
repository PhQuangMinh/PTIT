def solve():
    n = input()
    d = 0
    ans = ""
    for i in range (len(n)-1, -1, -1):
        ans +=n[i]
        d += 1
        if d==3:
            if i!=0:
                ans += ","
                d = 0
    print(ans[::-1])

n = 1
for i in range(n):
    solve()