from queue import LifoQueue
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    st = LifoQueue()
    l = [1] * n
    for i in range(n):
        while st.empty() == False:
            x = st.get()
            if a[x] > a[i]:
                st.put(x)
                break
        if st.empty() == False:
            x = st.get()
            print(i-x, end = ' ')
            st.put(x)
        else:
            print(i+1, end = ' ')
        st.put(i)
    print()


n = int(input())
for i in range(n):
    solve()