#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, s, m;
void solve(){
    cin >> n >> s >> m;
    if (m>n || 6*n<7*m){
        cout << -1;
        return;
    }
    cout << (s*m+n-1)/n;
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