n = int(input())

for i in range (n):
    val = input()
    val += 'a'
    ans = 0
    j = 0
    while (j<len(val)):
        if '0' <= val[j] <= '9':
            d = 0
            while('0' <= val[j] <= '9'):
                d = d*10 + int(val[j])
                j += 1 
            ans = max(ans, d)
        else:
            d = 0
            j += 1

    print(ans)