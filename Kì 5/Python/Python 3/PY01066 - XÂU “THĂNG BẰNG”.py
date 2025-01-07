def solve():
    n = input()
    l = len(n)
    if (l<=2):
        print("YES")
        return
    m = n[::-1]
    for i in range(1, l):
        if abs(ord(n[i])-ord(n[i-1])) != abs(ord(m[i-1]) - ord(m[i])):
            print("NO")
            return
    print("YES")
        
n = int(input())
for i in range(n):
    solve()