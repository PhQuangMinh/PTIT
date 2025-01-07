from collections import defaultdict
mod = 1e9+7
def solve():
    n = int(input())
    a = []
    ans = -1
    mp = defaultdict(int)
    while True:
        x = list(map(int, input().split()))
        for i in x:
            a.append(i)
            mp[i] = 1
        ans = max(ans, max(x))
        if len(a) == n:
            break
    ok = False
    for i in range(1, ans+1):
        if mp[i] == 0:
            print(i)
            ok = True
    if ok == False:
        print("Excellent!")
   

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()