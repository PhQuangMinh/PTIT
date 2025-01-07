n = int(input())

for i in range (n):
    val = input()
    val += 'a'
    ans = 1e18+7
    j = 0
    while (j<len(val)):
        if '0' <= val[j] <= '9':
            d = 0
            while('0' <= val[j] <= '9'):
                d = d*10 + int(val[j])
                j += 1 
            ans = min(ans, d)
        else:
            d = 0
            j += 1

    print(ans)