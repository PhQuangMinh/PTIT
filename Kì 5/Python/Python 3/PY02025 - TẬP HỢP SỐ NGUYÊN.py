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
    for x in a:
        for y in b:
            if x == y:
                print(x, end = ' ')
    print()
    for x in a:
        ok = True
        for y in b:
            if x == y:
                ok = False
        if ok:
            print(x, end = ' ')
    print()
    for x in b:
        ok = True
        for y in a:
            if x == y:
                ok = False
        if ok:
            print(x, end = ' ')

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()