import math
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def distance(seft, p):
        return math.sqrt((seft.x-p.x)*(seft.x-p.x) + (seft.y-p.y)*(seft.y-p.y))
def Decimal(x):
    return float(x)
if __name__ == '__main__':
    t = int(input())
    arr = []
    for x in range(t):
        arr += [float(i) for i in input().split()]
    i = 0
    for x in range(t):
        p1 = Point(Decimal(arr[i]), Decimal(arr[i+1]))
        p2 = Point(Decimal(arr[i+2]), Decimal(arr[i+3]))
        p3 = Point(Decimal(arr[i+4]), Decimal(arr[i+5]))
        d1 = p1.distance(p2)
        d2 = p2.distance(p3)
        d3 = p3.distance(p1)
        if(max(d1, d2, d3) * 2 >= d1 + d2 + d3) : print('INVALID')
        else : print('{:.3f}'.format(d1 + d2 + d3))
        i += 6