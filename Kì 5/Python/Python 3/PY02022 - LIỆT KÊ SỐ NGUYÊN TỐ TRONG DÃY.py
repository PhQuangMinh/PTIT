import math
from collections import defaultdict
def snt(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x%i==0:
            return False
    return x>1
n = int(input())
a = list(map(int, input().split()))
mp = defaultdict(int)
for x in a:
    if snt(x):
        mp[x] += 1
for x in a:
    if mp[x] > 0:
        print(x, mp[x])
        mp[x] = 0