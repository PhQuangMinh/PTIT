p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

while (True):
    a = input().split()
    k = int(a[0])
    if (k==0):
        break
    s = a[1]
    n = len(s)
    for i in range(n-1, -1, -1):
        cnt = 0
        for x in p:
            if x == s[i]:
                break
            cnt += 1
        print(p[(cnt +k)%28], end = '')
    print()