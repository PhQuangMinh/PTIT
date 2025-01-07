a = [0] * (10**6+1)
def sang():
    a[0] = 1
    a[1] = 1
    for i in range (1, 1001):
        if a[i] == 0:
            for j in range (i*i, 1000001, i):
                a[j] = 1

def solve():
    n = int(input())
    count = 0
    for i in range (7, n):
        if a[i]==0 and a[i-2] == 0 and a[i-6] == 0 or a[i]==0 and a[i-4] == 0 and a[i-6] == 0:
            count += 1
    print(count)
n = int(input())
sang()
for i in range(n):
    solve()