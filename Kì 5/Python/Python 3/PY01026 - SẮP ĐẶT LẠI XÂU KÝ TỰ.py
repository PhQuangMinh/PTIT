def solve():
    n = int(input())
    for i in range(n):
        x = input()
        y = input()
        dx = [0]*130
        dy = [0]*130
        for j in x:
            dx[ord(j)] += 1
        for j in y:
            dy[ord(j)] += 1
        ok = "YES"
        for j in range(97, 123):
            if dx[j] != dy[j]:
                ok = "NO"
                break
        print(f"Test {i+1}: {ok}")
n = 1
for i in range(n):
    solve()