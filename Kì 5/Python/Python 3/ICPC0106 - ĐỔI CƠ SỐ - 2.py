n = int(input())

def convert(a):
    return chr(a - 10 + 65)

for i in range (n):
    b = int(input())
    s = input()
    tich = 1
    d = 0
    while tich < b:
        d+=1
        tich*=2
    while(len(s)%d!=0):
        s = "0" + s
    ans = ""
    for i in range(0, len(s), d):
        x = 0
        t = 1
        for j in range(i+d-1, i-1, -1):
            x += t*int(s[j])
            t *= 2
        if (x >= 10):
            ans += convert(x)
        else:
            ans += str(x)
    print(ans)