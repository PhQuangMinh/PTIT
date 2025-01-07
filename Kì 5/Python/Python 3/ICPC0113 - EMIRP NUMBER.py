from collections import defaultdict
nt  = [0] * (10**6+1)

def sangnt():
    nt[0] = 1
    nt[1] = 1
    for i in range (2, 1001):
        if nt[i] == 0:
            for j in range(i*i, 1000001, i):
                nt[j] = 1

def reverseNumber(n):
    x = 0
    while(n>0):
        x = x*10 + n%10
        n//=10
    return x
def solve():
    n = int(input())
    mp = defaultdict(int) # default cac gia tri trong map = 0
    for i in range (13, n):
        # print(i, end = ' ')
        if mp[i] == 0 and nt[i] == 0:
            x = reverseNumber(i)
            if x != i and nt[x] == 0 and x<n:
                print(i, x, end = ' ')
                mp[i] = 1
                mp[x] = 1
t = int(input())
sangnt()
for i in range (t):
    solve()
    print()
