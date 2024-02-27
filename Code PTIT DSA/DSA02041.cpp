#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int ans;
void Try(int n, int cnt){
    if (cnt>ans) return;
    if (n==1){
        ans = min(ans, cnt);
        return;
    }
    if (n%3==0) Try(n/3, cnt+1);
    if (n%2==0) Try(n/2, cnt+1);
    Try(n-1, cnt+1);
}
void solve(){
    int n;
    cin >> n;
    ans = mod;
    Try(n, 0);
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
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}