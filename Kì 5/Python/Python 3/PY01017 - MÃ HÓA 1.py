def solve():
    s = input()
    d = 1
    s += ' '
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            d += 1
        else:
            print(f"{d}{s[i]}", end = '')
            d = 1
    print()
n = int(input())
for i in range(n):
    solve()