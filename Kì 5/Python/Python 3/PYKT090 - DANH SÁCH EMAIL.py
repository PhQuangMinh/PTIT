from collections import defaultdict
import sys
mod = 1e9+7
def solve():
    ans = {}
    with open('CONTACT.in', 'r') as f:
        for line in f:
            if line[-1] == '\n':
                line = line[:-1]
            ans[line.lower()] = 1
    ans = sorted(ans.keys())
    for x in ans:
        print(x)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()