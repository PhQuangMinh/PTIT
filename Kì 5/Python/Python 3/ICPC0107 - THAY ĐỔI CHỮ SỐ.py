def solve():
    a, b = input().split()
    if (a>b):
        a, b = b, a
    str = input().split()
    if len(str) == 1:
        x = str[0]
        y = input()
    else:
        x = str[0]
        y = str[1]
    minsum = int(x.replace(b, a)) + int(y.replace(b, a))
    maxsum = int(x.replace(a, b)) + int(y.replace(a, b))
    print(minsum, maxsum)

n = int(input())
for i in range(n):
    solve()