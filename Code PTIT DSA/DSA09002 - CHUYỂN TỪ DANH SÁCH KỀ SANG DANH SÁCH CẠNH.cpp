#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first<b.first || a.first==b.first && a.second<b.second) return true;
    return false;
}
void solve(){
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    cin.ignore();
    vector<pair<int, int>> a;
    for (int i=1;i<=n;i++){
        string s;
        getline(cin, s);
        stringstream tach(s);
        int k;
        while (tach >> k){
            int x = i;
            if (x>k) swap(x, k);
            if (mp[{x, k}]==0) a.push_back({x, k});
            mp[{x, k}]=1;
        }
    }
    sort(a.begin(), a.end());
    for (auto it:a) cout << it.first << ' ' << it.second << '\n';
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}