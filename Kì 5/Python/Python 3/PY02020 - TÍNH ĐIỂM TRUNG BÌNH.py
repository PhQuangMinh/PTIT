import math
n = int(input())
a = list(map(float, input().split()))
minValue = min(a)
maxValue = max(a)
sum = 0
cnt = 0

for i in range(n):
    if a[i] != minValue and a[i]!=maxValue:
        sum += a[i]
        cnt += 1
print(f"{sum/cnt:.2f}")
