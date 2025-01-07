def solve():
    n = input()
    for i in range (0, len(n)):
        if n[i] != '0' and n[i] != '1' and n[i] != '2':
            print("NO")
            return
    print("YES")

n = int(input())
for i in range(n):
    solve()