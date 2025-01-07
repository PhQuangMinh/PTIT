def solve():
    n, b = map(int, input().split())
    ans = []
    while n>0:
        x = n%b
        n//=b
        ans.append(x)
    ans.reverse()
    for x in ans:
        if x<10:
            print(x, end = '')
        else:
            print(chr(x + 55), end = '')
    print()
n = int(input())
for i in range(n):
    solve()