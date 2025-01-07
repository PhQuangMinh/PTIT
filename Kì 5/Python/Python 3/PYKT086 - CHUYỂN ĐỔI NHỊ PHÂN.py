import math
f = open("DATA.in", "r")
base = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']
n = int(f.readline().strip())
# n = int(input())
for k in range(n):
    m = int(f.readline().strip())
    s = f.readline().strip()
    d = 0
    tmp = 1
    while tmp<m:
        tmp*=2
        d+=1
    while len(s)%d != 0:
        s = "0" + s
    for i in range(0, len(s), d):
        sum = 0 
        t = 1
        for j in range(i+d-1, i-1, -1):
            sum += int(s[j])*t
            t*=2
        print(base[sum], end = "")
    print()