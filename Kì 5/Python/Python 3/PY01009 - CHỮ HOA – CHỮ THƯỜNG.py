def solve():
    n = input()
    cnt = 0
    for i in range(len(n)):
        if n[i].islower():
            cnt += 1
    if (len(n)<=cnt*2):
       print(n.lower())
    else: 
        print(n.upper())

n = 1
for i in range(n):
    solve()