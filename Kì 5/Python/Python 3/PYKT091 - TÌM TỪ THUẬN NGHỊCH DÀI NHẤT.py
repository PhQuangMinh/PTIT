from collections import defaultdict
mod = 1e9+7
def init(x):
    n = len(x)
    for i in range(int(n/2)):
        if x[i] != x[n-i-1]:
            return False
    return True
def solve():
    mp = defaultdict(int)
    a = []
    ma = 0
    with open('VANBAN.in', 'r') as file:
        for line in file:
            x = line.strip().split()
            for y in x:
                if init(y):
                    mp[y] += 1
                    ma = max(ma, len(y))
                    a.append(y)
    for x in a:
        if len(x) == ma and mp[x]>0:
            print(x, mp[x])
            mp[x] = 0

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()