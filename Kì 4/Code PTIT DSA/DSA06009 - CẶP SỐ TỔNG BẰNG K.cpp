#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    for (int i=1;i<k/2;i++){
        ans +=mp[i]*mp[k-i];
    }
    if (k%2==1){
        ans += mp[k/2]*mp[k-k/2];
    }
    else ans +=mp[k/2]*(mp[k/2]-1)/2;
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