from collections import defaultdict
n = int(input())
cnt = 0
mp = defaultdict(int)
for i in range(n):
    x = input()
    if mp[x] == 0:
        mp[x] = 1
        cnt += 1
print(cnt)
