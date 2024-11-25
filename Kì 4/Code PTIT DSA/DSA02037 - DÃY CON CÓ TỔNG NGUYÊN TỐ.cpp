#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int n;
int a[25];
set<vector<int>> ans;
vector<int> tmp;
bool vs[20];
int snt(int x){
    for (int i=2;i*i<=x;i++)
        if (x%i==0) return 0;
    return x>1;
}
void Try(int j, int sum)
{
    for (int i = j; i <= n; i++)
        if (!vs[i])
        {
            vs[i] = true;
            tmp.push_back(a[i]);
            sum+=a[i];
            if (snt(sum)){
                vector<int> a(tmp.rbegin(), tmp.rend());
                ans.insert(a);
            }
            Try(i+1, sum);
            sum-=a[i];
            vs[i] = false;
            tmp.pop_back();
        }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    memset(vs, false, sizeof(vs));
    ans.clear();
    Try(1, 0);
    for (auto x : ans)
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << ' ';
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
        if (i != t)
            cout << "\n";
    }
}