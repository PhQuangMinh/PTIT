import math
def snt(x):
    for i in range(2, int(math.sqrt(x)) + 1):
        if x%i==0:
            return False
    return x>1
n, m = map(int, input().split())

for i in range(n):
    a = list(map(int, input().split()))
    for x in a:
        if snt(x):
            print(1, end = ' ')
        else:
            print(0, end = ' ')
    print()
