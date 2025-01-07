def solve(n):
    cnt = 0
    while True:
        cnt += 1
        if n==1:
            print(cnt)
            return
        if n%2==1:
            n = n*3+1
        else:
            n = n/2


while True:
    n = int(input())
    if n == 0:
        break
    solve(n)
