class Rectangle:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
arr = input().split()
r = Rectangle(float(arr[0]), float(arr[1]), arr[2].lower().title())
if r.x == int(r.x) and r.y == int(r.y) and r.x>0 and r.y>0:
    print(int(2*(r.x+r.y)), int(r.x*r.y), r.z)
else:
    print("INVALID")
