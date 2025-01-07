from queue import LifoQueue
mod = 1e9+7
def solve():
    st = LifoQueue()
    d = 1
    s = input()
    for x in s:
        if x == '(':
            st.put(d)
            print(d, end = ' ')
            d += 1
        else:
            if x == ')':
                print(st.get(), end = ' ')


if __name__ == "__main__":
    n = 1
    n = int(input())
    for i in range(n):
        solve()
        if i != n-1:
            print()