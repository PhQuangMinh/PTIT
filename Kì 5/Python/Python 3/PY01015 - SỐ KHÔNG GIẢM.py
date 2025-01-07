def solve():
    n = input()
    for i in range(1, len(n)):
        if int(n[i]) < int(n[i-1]):
            print("NO")
            return
    print("YES")

n = int(input())
for i in range(n):
    solve()