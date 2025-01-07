mod = 1e9+7
def solve():
    n = input()
    for x in n:
        if x != '6' and x !='8':
            print("NO")
            return
    if n[0] == '8':
        print("NO")
        return
    for i in range(2, len(n)):
        if n[i-2] == '8' and n[i-1] == '8' and n[i] == '8':
            print("NO")
            return
    print("YES")
    
n = 1
for i in range(n):
    solve()