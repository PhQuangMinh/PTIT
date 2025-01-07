mod = 1e9+7
def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    st = set()
    for x in a:
        st.add(x)
    a = sorted(st)
    st.clear()
    for x in b:
        st.add(x)
    b = sorted(st)
    st.clear()
    if len(a) != len(b):
        print("NO")
        return
    for i in range(len(a)):
        if a[i] != b[i]:
            print("NO")
            return
    print("YES")

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()