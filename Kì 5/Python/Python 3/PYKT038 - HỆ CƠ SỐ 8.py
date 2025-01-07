def solve():
    n = input()
    while len(n)%3>0:
        n = "0" + n
    for i in range (0, len(n)-2, 3):
        x = 4*int(n[i]) + 2*int(n[i+1]) + int(n[i+2])
        print(x, end = '')

n = 1
for i in range(n):
    solve()