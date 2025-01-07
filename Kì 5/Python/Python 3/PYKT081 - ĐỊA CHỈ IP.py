def solve():
    s = input()
    cnt = 0
    for i in range (len(s)):
        if s[i]=='.':
            if i==0 or i == len(s)-1:
                print("NO")
                return
            else:
                if not s[i-1].isdigit() or not s[i+1].isdigit():
                    print("NO")
                    return
            cnt += 1
    if cnt != 3:
        print("NO")
        return
    a = list(map(int, s.split('.')))
    for x in a:
        # print(x)
        if x<0 or x>255:
            print("NO")
            return
    print("YES")
n = int(input())
for i in range(n):
    solve()