if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n, c, d = map(int, input().split())
        if c>d:
            c, d = d, c
        a = list(map(int, input().split()))
        a.sort(reverse=True)
        tmp1 = sum(a[:c])/c
        tmp2 = sum(a[c:c+d])/d
        ans = tmp1 + tmp2
        print(f"{ans:.6f}")