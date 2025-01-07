from collections import defaultdict
mod = 1e9+7
def check(x):
    for i in x:
        if i<'0' or i>'9':
            return False
    return True
def solve():
    mp = defaultdict(int)
    a = []
    ma = 0
    with open('DATA.in', 'r') as file:
        for line in file:
            x = line.strip().split()
            for y in x:
                if not check(y):
                    a.append(y)
                else:
                    tmp = int(y)
                    if tmp>2147483647:
                        a.append(y)
    a.sort()
    for x in a:
        print(x, end = ' ')
if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()