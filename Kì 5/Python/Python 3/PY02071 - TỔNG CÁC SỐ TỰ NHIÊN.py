def generate_partitions(n):
    a = [0] * 100
    a[0] = n
    ans = 1
    ok = True
    res = []
    while ok:
        tmp = []
        for i in range(ans):
            tmp.append(a[i])
        res.append(tmp)

        i = ans - 1
        while i >= 0 and a[i] == 1:
            i -= 1
        if i < 0:
            ok = False
        else:
            a[i] -= 1
            d = ans - i
            ans = i + 1
            p = d // a[i]
            r = d % a[i]
            for j in range(p):
                a[ans] = a[i]
                ans += 1
            if r > 0:
                a[ans] = r
                ans += 1
    print(len(res))
    for x in res:
        print("(", end="")
        for i in range(len(x)):
            print(x[i], end="")
            if i != len(x)-1:
                print(" ", end="")
        print(")", end=" ")

def solve():
    n = int(input())
    for _ in range(n):
        generate_partitions(int(input()))
        print()

if __name__ == "__main__":
    solve()