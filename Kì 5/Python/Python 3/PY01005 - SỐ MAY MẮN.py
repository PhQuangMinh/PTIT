def solve():
    n = input()
    cnt = 0
    for i in range(len(n)):
        if n[i] == '4' or n[i] == '7':
            cnt += 1
    if cnt == 4 or cnt == 7:
        print("YES")
    else:
        print("NO")

n = 1
for i in range(n):
    solve()