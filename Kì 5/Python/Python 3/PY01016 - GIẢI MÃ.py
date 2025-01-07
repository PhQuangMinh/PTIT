def solve():
    n = input()
    for i in range(0, len(n), 2):
        k = int(n[i+1])
        for x in range(k):
            print(n[i], end = '')
    print()

n = int(input())
for i in range(n):
    solve()