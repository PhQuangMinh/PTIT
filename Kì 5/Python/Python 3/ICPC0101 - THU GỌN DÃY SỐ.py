n=int(input())
a=list(map(int, input().split()))
b=[]
for i in range(n):
    if len(b) ==0:
        b.append(a[i])
    else:
        c= b[-1]+a[i]
        if c%2==0:
            b.pop()
        else:
            b.append(a[i])
print(len(b))