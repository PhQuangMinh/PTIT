#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, k;
void solve(){
    cin >> n >> m >> k;
    ll a[n+5], b[m+5], c[k+5];
    map<ll, int> mp1, mp2;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i=1;i<=m;i++){
        cin >> b[i];
    } 
    vector<long long> ans;
    for (int i=1;i<=k;i++){
        cin >> c[i];
    }
    int x = 1, y = 1, z = 1;
    while (x<=n && y<=m && z<=k){
        if (a[x]==b[y] && b[y] == c[z]){
            ans.push_back(a[x]);
            x++;y++;z++;
        }
        else{
            if (a[x]<b[y]) x++;
            else 
                if (b[y]<c[z]) y++;
                else z++;
        }
    }
    if (ans.empty()){
        cout << -1;
        return;
    }
    for (auto x:ans) cout << x <<  ' ';
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