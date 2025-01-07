def solve():
    n = input()
    d = 1
    for x in n:
        if x != '0':
            d *= int(x)
    print(d)

n = int(input())
for i in range(n):
    solve()