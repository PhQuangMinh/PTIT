def solve():
    str1, str2 = input().split()
    n, k = int(str1), int(str2)
    a = [int(i) for i in input().split()]
    for i in range(k, n):
        print(a[i], end=' ')
    for i in range(k):
        print(a[i], end=' ')
    print()
n = int(input())
for i in range(n):
    solve()