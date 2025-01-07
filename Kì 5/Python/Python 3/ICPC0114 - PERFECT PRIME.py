import math
def ktrnt(n):
    for i in range(2, int(math.sqrt(n))):
        if n%i==0:
            return False
    return n>1
def reverseNumber(n):
    x = 0
    while(n>0):
        x = x*10 + n%10
        n//=10
    return x
def cs(n):
    x = 0
    while (n>0):
        if ktrnt(n%10) == False:
            return False
        x += n%10
        n //= 10
    return ktrnt(x)

def solve():
    n = int(input())
    if ktrnt(n) and ktrnt(reverseNumber(n)) and cs(n):
        print("Yes")
    else:
        print("No")

n = int(input())
for i in range(n):
    solve()