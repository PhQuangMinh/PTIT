def solve():
    n = input()
    d = 0
    while True:
        if int(n)%7==0 or d>1000:
            print(n)
            return
        d += 1
        n = str(int(n) + int(n[::-1]))

n = int(input())
for i in range(n):
    solve()