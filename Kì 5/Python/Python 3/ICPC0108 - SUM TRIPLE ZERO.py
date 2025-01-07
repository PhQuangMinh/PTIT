def solve():
    n = int(input())
    a = sorted([int(i) for i in input().split()])
    ans = 0
    for i in range (n-2):
        l, r = i+1, n-1
        while l<r:
            t = a[i] + a[l] + a[r]
            if not t:
                ans += 1
                l += 1
            elif t < 0:
                l += 1
            else:
                r -= 1
    print(ans)

n = int(input())
for i in range (n):
    solve()