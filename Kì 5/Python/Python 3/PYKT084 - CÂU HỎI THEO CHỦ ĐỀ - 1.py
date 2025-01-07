def solve():
    n = int(input())
    cnt = 0
    while (True):
        cnt += 1
        name = input()
        d = 0
        while (True):
            inp = input()
            cnt += 1
            d += 1
            if cnt == n or inp == "":
                if inp == "":
                    d -= 1
                print(f"{name}: {d}")
                break
        if cnt == n:
            break
n = 1
for i in range(n):
    solve()