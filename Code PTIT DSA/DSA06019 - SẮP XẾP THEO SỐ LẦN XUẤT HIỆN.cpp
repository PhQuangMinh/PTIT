#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int cmp(pair<int, int> a, pair<int, int> b){
    if (a.second>b.second || a.second == b.second && a.first<b.first) return 1;
    return 0;
}
void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    int en = -1e9;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp[x]++;
        en = max(en, x);
    }
    vector<pair<int, int>> tmp;
    for (int i=0;i<=en;i++)
        if (mp[i]) tmp.push_back({i, mp[i]});
    sort(tmp.begin(), tmp.end(), cmp);
    for (auto x:tmp){
        for (int i=1;i<=x.second;i++) cout << x.first << ' ';
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}