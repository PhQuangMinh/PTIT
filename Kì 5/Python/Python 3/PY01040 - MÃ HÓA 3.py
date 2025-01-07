mod = 1e9+7
mp = {}
for i in range(26):
    mp[chr(i+ord('A'))] = i
def cv(s):
    t = 0
    for x in s:
        t += mp[x]
    t%=26
    ans = ""
    for x in s:
        p = ord(x) + t
        if p>90:
            ans += chr(65+p%90-1)
        else:
            ans += chr(p)
    return ans
def solve():
    s = input()
    n = len(s)
    d = s[:n//2]
    c = s[n//2:]
    d = cv(d)
    c = cv(c)
    ans = ""
    for i in range(len(d)):
        p = ord(d[i]) + mp[c[i]]
        if p>90:
            ans += chr(65+p%90-1)
        else:
            ans += chr(p)
    print(ans)

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()