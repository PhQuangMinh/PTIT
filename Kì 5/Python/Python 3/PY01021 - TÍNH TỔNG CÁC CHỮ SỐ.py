def solve():
    s = input()
    sum = 0
    a = [0]*100
    for x in s:
        if x.isdigit():
            sum += int(x)
        else:
            a[ord(x)] += 1
    for i in range(65, 91):
        for j in range(a[i]):
            print(chr(i), end = "")
    print(sum)
    
n = int(input())
for i in range(n):
    solve()