def solve():
    n = input().strip()
    cnt = 0
    while len(n)>1:
        d = 0
        for x in n:
            d += ord(x) - ord('0')
        n = str(d)
        cnt += 1
    print(cnt)
    
n = 1
for i in range(n):
    solve()