def isValid(n):
    if len(n)%2==0 or n[0]==n[1]:
        return False
    for i in range(2, len(n), 2):
        if n[i] != n[i-2]:
            return False
    return True
def solve():
    n = input()
    if isValid(n):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()