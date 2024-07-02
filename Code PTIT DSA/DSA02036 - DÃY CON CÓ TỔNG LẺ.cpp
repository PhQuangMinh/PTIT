#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int n;
int a[25];
set<vector<int>> ans;
vector<int> tmp;
bool vs[20];
void Try(int j, int sum)
{
    for (int i = j; i <= n; i++)
        if (!vs[i])
        {
            vs[i] = true;
            tmp.push_back(a[i]);
            sum+=a[i];
            if (sum%2==1){
                vector<int> a(tmp.rbegin(), tmp.rend());
                ans.insert(a);
            }
            Try(i+1, sum);
            sum-=a[i];
            vs[i] = false;
            tmp.pop_back();
        }
}
int cmp(vector<int> x, vector<int> y){
    string x1="";
    for (auto t:x) x1+=to_string(t);
    string y1 ="";
    for (auto t:y) y1+=to_string(t);
    return x1<y1;
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
    // sort(ans.begin(), ans.end(), cmp);
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