import functools
def tcs(x):
    sum = 1
    while x > 0:
        sum *= x%10
        x//=10
    return sum
def cmp(a, b):
    if tcs(a) == tcs(b):
        if a>b:
            return 1
        return -1
    if tcs(a)>tcs(b):
        return 1
    return -1
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = sorted(a, key = functools.cmp_to_key(cmp))
    for x in b:
        print(x, end = ' ')
    print()


n = int(input())
for i in range(n):
    solve()