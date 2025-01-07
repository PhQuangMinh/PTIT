mod = 1e9+7
def solve():
    n = input()
    st = set()
    for i in range(0, len(n)//2*2, 2):
        st.add(int(n[i])*10 + int(n[i+1]))
    a = sorted(st)
    for x in a:
        print(x, end = ' ')

if __name__ == "__main__":
    n = 1
    for i in range(n):
        solve()