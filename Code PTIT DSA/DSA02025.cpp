#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n;
int ans = mod;
bool vs[15];
string tmp[15];
string s[15];
int lap(string s, string t){
    int a[200]={0};
    int cnt = 0;
    for (auto x:s) a[x]++;
    for (auto x:t) 
        if (a[x]) cnt++;
    return cnt;
}
void Try(int i, int sum){
    for (int j=1;j<=n;j++){
        if (!vs[j]){
            vs[j] = true;
            tmp[i]=s[j];
            int cnt = lap(tmp[i], tmp[i-1]);
            if (i==n) ans = min(ans, sum+cnt);
            if (sum+cnt<ans) Try(i+1, sum+cnt);
            vs[j] = false;
        }
    }
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++) cin >> s[i];
    memset(vs, false, sizeof(vs));
    Try(1, 0);
    cout << ans;
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