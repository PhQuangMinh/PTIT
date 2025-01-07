def tcs(n):
    sum = 0
    for i in range (len(n)):
        sum += int(n[i])
        if i>0:
            if abs(int(n[i])-int(n[i-1]))!=2:
                return False

    return sum%10 == 0
def solve():
    n = input()
    if tcs(n):
        print("YES")
    else:
        print("NO")

n = int(input())
for i in range(n):
    solve()