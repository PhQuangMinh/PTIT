def cal(x):
    if x<5: return 2.5
    if x<7: return 3.0
    if x<10: return 3.5
    if x<13: return 4
    if x<16: return 4.5
    if x<20: return 5
    if x<23: return 5.5
    if x<27: return 6
    if x<30: return 6.5
    if x<33: return 7
    if x<35: return 7.5
    if x<37: return 8
    if x<39: return 8.5
    return 9.0
def solve():
    a = list(map(float, input().split()))
    avg = (cal(int(a[0])) + cal(int(a[1])) + a[2] + a[3])/4
    thuc = avg-int(avg)
    avg -= thuc
    if thuc>=0.75:
        avg += 1
    else:
        if thuc>=0.25:
            avg = avg + 0.5
    print(avg)
n = int(input())
for i in range(n):
    solve()