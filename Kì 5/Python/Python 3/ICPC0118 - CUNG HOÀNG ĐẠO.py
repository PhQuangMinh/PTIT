c = ["Ma Ket", "Bao Binh", "Song Ngu", "Bach Duong", "Kim Nguu", "Song Tu", "Cu Giai", "Su Tu", "Xu Nu", "Thien Binh", "Thien Yet", "Nhan Ma"]
b = [19, 18, 20, 19, 20, 20, 22, 22, 22, 22, 22, 21]
def solve():
    a = [int(i) for i in input().split()]
    if (b[a[1]-1]>=a[0]):
        print(c[a[1]-1])
    else:
        if a[1]==12:
            print(c[0])
        else:
            print(c[a[1]])

n = int(input())
for i in range(n):
    solve()