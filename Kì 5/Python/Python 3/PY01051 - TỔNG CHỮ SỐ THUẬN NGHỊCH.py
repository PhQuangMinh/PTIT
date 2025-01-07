def solve():
    n = input()
    d = 0
    for x in n:
        d += int(x)
    if len(str(d))>1 and str(d) == str(d)[::-1]:
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()