mod = 1e9+7
def solve():
    n = input()
    while True:
        l = len(n)//2
        x = str(int(n[:l]) + int(n[l:]))
        n = x
        print(x)
        if len(x) == 1:
            break

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()