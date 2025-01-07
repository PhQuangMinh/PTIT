import math
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def distance(seft, p):
        return f"{math.sqrt((seft.x-p.x)*(seft.x-p.x) + (seft.y-p.y)*(seft.y-p.y)): .4f}"
def Decimal(x):
    return float(x)
if __name__ == '__main__':
    t = int(input())
    while t > 0:
        arr = input().split()
        p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
        p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
        print(p1.distance(p2))
        t -= 1
