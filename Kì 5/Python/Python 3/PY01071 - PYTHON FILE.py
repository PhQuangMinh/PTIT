def solve():
    n = input().lower()
    l = len(n)
    if n[l-3:] == '.py':
        print("yes")
    else:
        print("no")

n = 1
for i in range(n):
    solve()