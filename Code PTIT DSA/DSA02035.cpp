#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
bool vs[10];
string a[10], b[10];
int c[10];
int n, k, ans;
void check(){
    for (int i=1;i<=n;i++){
        for (int j=0;j<k;j++){
            b[i][j] = a[i][c[j]];
        }
    }
    cout << '\n';
    sort(b+1, b+n+1);
    int tmp1 = stoi(b[1]);
    int tmp2 = stoi(b[n]);
    ans = min(ans, tmp2-tmp1);
}
void Try(int i){
    for (int j=0;j<k;j++){
        if (!vs[j]){
            vs[j] = true;
            c[i] = j;
            if (i==k-1) check();
            else Try(i+1);
            vs[j] = false; 
        }
    }
}
void solve(){
    cin >> n >> k;
    ans = mod;
    memset(vs, false, sizeof(vs));
    for (int i=1;i<=n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    Try(0);
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