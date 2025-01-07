def solve():
    n = input()
    if len(n) == 1:
        print(n)
        return
    d = 0
    for i in range(len(n) - 1, -1, -1):
        x = int(n[i]) + d
        if i == 0:
            print(x, end = '')
            for i in range(1, len(n)):
                print(0, end = '')
            print()
            return
        if (x>=5):
            d = 1
        else:
            d = 0
            # print(n[0], end = '')
            # for i in range(1, len(n)):
            #     print(0, end = '')
            # print()                
            # return
    

n = int(input())
for i in range(n):
    solve()