mod = 1e9+7
def solve():
    x, y, z, t = map(int, input().split())
    t1 = (x+z)*x - (y+t)*y
    a1 = (x+z)*y + (y+t)*x
    t2 = (x+z)*(x+z) - (y+t)*(y+t)
    a2 = (x+z)*(y+t)*2
    print(t1, end = '')
    if a1>0:
        print(' + ', end = '')
    else:
        print(' - ', end = '')
    print(abs(a1), 'i', sep='', end = '')
    print(',', t2, end = '')
    if a2>0:
        print(' + ', end = '')
    else:
        print(' - ', end = '')
    print(abs(a2), 'i', sep='')
    

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()