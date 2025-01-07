def solve():
    s = input()
    t = input()
    p = int(input())
    if p == len(s)+1:
        print(f"{s}{t}")
        return
    for i in range(len(s)):
        if i == p-1:
            print(t, end = "")
        print(s[i], end = "")
n = 1
for i in range(n):
    solve()