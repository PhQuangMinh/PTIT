a = []
n = int(input())

for i in range(n):
    x = list(map(int, input().split()))
    x.reverse()
    a.append(x)
k = int(input())
sumT = 0
sumD = 0
for i in range(n):
    for j in range(n):
        if j<i:
            sumD += a[i][j]
        else:
            if j>i:
                sumT += a[i][j]
if abs(sumD - sumT)<=k:
    print("YES")
    print(abs(sumD - sumT))
else:
    print("NO")
    print(abs(sumD - sumT))