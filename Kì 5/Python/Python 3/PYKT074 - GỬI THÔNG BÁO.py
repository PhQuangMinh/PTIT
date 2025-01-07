def solve():
    s = input()
    a = s.split()
    cnt = len(a[0])
    print(a[0], end = '')
    for i in range(1, len(a)):
        cnt += 1+len(a[i])
        if cnt>100:
            break
        print('', a[i], end = '')
    print()

n = int(input())
for i in range(n):
    solve()