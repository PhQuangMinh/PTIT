def solve():
    n = input()
    if n[len(n)-2] != '8' or n[len(n)-1] !='6':
        print("NO")
        return
    print("YES")

n = int(input())
for i in range(n):
    solve()