import math
def snt(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x%i==0:
            return False
    return x>1
if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    for x in a:
        if not snt(x):
            d = 1
            while snt(x+d) == False:
                d += 1
            if x>1:
                d1 = 1
                while snt(x-d1) == False:
                    d1 += 1
            if x>1:
                ans = max(ans, min(d, d1))
            else:
                ans = max(ans, d)
    print(ans)