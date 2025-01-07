def solve():
    n = input()
    if len(n)<3:
        print("NO")
        return
    if n[0]>n[1]:
        for i in range(2, len(n)):
            if n[i]>=n[i-1]:
                print("NO")
                return
    else:
        for i in range(1, len(n)):
            if n[i] == n[i-1]:
                print("NO")
                return
            if n[i-1] > n[i]:
                for j in range(i+1, len(n)):
                    if n[j]>=n[j-1]:
                        print("NO")
                        return
    print("YES")

n = int(input())
for i in range(n):
    solve()