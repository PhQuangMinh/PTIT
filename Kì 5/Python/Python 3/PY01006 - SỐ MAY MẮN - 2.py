def solve():
    n = input()
    for i in range(len(n)):
        if n[i] != '4' and n[i] != '7':
            print("NO")
            return
    print("YES")

n = int(input())
for i in range(n):
    solve()