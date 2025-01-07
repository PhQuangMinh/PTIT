def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    ma = max(a)
    am = []
    duong = []
    for x in a:
        if x==ma:
            if k<0:
                am.append(k)
            else:
                duong.append(k)
            ma = 1e9+7
        if x<0:
            am.append(x)
        else:
            duong.append(x)
    for x in am:
        print(x, end = ' ')
    for x in duong:
        print(x, end = ' ')
n = int(input())
for i in range(n):
    solve()
    print()