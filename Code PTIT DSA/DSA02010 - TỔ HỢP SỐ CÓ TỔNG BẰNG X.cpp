#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int n, k;
int a[25];
vector<vector<int>> ans;
vector<int> tmp;
void Try(int j, int sum)
{
    if (sum>=k){
        if (sum==k) ans.push_back(tmp);
        return;
    }
    for (int i = j; i <= n; i++)
    {
        tmp.push_back(a[i]);
        Try(i, sum+a[i]);
        tmp.pop_back();
    }
}
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    ans.clear();
    Try(1, 0);
    if (ans.empty()){
        cout << -1;
        return;
    }
    if (ans.empty()){
        cout << -1;
        return;
    }
    for (auto x:ans){
        cout << "[";
        for (int i=0;i<x.size();i++){
            cout << x[i];
            if (i==x.size()-1) cout << "]";
            else cout << ' '; 
        }
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