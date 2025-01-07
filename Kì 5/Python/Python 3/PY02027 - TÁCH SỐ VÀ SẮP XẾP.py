import re
def solve() :
    n = int(input())
    ans = []
    for i in range(n):
        s = input()
        numbers = re.findall(r'\d+', s)
        for x in numbers:
            ans.append(int(x))
    ans.sort()
    for p in ans:
        print(p)

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()