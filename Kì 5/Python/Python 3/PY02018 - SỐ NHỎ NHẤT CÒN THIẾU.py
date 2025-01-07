from collections import defaultdict
n = int(input())
a = list(map(int, input().split()))
mp = defaultdict(int)
for x in a:
    mp[x] += 1
for i in range(1, 30002):
    if mp[i] == 0:
        print(i)
        break
