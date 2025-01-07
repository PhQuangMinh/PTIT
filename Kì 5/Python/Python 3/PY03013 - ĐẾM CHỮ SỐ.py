mod = 1e9+7
def demcs(a, d):
    tmp = 1
    ans = 0
    while a//tmp > 0:
        lwr = a%tmp
        cur = (a//tmp)%10
        hg = a//(tmp*10)
        if d==0:
            hg -= 1
        if cur>d:
            ans += (hg+1)*tmp
        else:
            if cur == d:
                ans += hg*tmp + lwr + 1
            else:
                ans += hg*tmp
        tmp*=10
    return ans 
def solve():
    a, b = map(int, input().split())
    for i in range(10):
        print(demcs(b, i) - demcs(a-1, i), end = " ")
    print()

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()