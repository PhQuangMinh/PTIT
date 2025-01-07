mod = 1e9+7
import math
def solve():
    n = int(input())
    cnt = 0
    for i in range(1, int(math.sqrt(2*n))+1):
        if 2*n%i==0:
            a = i
            b = 2*n//i
            if (a+b-1)%2==1:
                continue
            c = (a+b-1)//2
            d = b-c
            # print(i, d, c, (c+d)*(c-d+1))
            if c>0 and d>0 and (c+d)*(c-d+1)==2*n and d!=c:
                cnt += 1
    print(cnt)
    # print()
   

if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()