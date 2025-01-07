def solve():
    n = int(input())
    a = []
    s = ""
    for i in range(n):
        tmp = input().split()
        if len(tmp)==7:
            s += "7"
        else:
            if len(tmp)==6:
                s += "6"
            else:
                s += "8"
    for i in range(n):
        s = s.replace("7777", "2").replace("68", "1")
    for i in range(n):
        s = s.replace("11", "1")
    print(len(s))
    for i in range(len(s)):
        print(s[i])
n = 1
for i in range(n):
    solve()