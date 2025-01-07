from collections import defaultdict
mod = 1e9+7
def solve():
    n, k = map(int, input().split())
    mp = defaultdict(int)
    a = []
    for i in range(n):
        x = input()
        for i in range(len(x)):
            if not x[i].isalpha() and not x[i].isdigit() and x[i]!=' ':
                x = x[:i] + ' ' + x[i+1:]
        y = list(map(str, x.split()))
        for j in y:
            x = j.lower()
            mp[x] += 1
            a.append(x)
    ans = []
    for x in a:
        if mp[x]>0:
            ans.append((x, mp[x]))
            mp[x] = 0
    ans.sort(key=lambda x:(-x[1], x[0]))
    for x in ans:
        if x[1]>=k:
            print(x[0], x[1])
    

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()