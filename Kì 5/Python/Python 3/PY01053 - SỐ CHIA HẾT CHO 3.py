def solve():
    n = input()
    d = 0
    for x in n:
        d += int(x)
    if d%3 == 0:
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()