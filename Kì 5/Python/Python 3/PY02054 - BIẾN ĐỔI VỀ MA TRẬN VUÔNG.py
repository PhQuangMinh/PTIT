mod = 1e9+7
def solve():
    n, m = map(int, input().split())
    if n>=m:
        d = n-m
        for i in range(n):
            x = list(map(int, input().split()))
            if i%2==0:
                if d>0:
                    d -= 1
                    continue
            for y in x:
                print(y, end = ' ')
            print()
    else:
        d = 1+(m-n-1)*2
        for i in range(n):
            x = list(map(int, input().split()))
            for j in range(len(x)):
                if j%2==1 and j<=d:
                    continue
                print(x[j], end = ' ')
            print()

   

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()