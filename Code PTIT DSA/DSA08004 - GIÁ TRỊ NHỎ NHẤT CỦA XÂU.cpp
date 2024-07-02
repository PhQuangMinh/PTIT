#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> k;
    string s;
    cin >> s;
    n = s.size();
    int d[200]={0};
    for (int i=0;i<n;i++){
        d[s[i]]++;
    }
    priority_queue<int> pq;
    for (int i=1;i<=199;i++){
        if (d[i]) pq.push(d[i]);
    }
    if (k>=n){
        cout << 0;
        return;
    }
    while (k){
        k--;
        int tmp = pq.top();
        pq.pop();
        pq.push(tmp-1);
    }
    ll ans = 0;
    while (!pq.empty()){
        int tmp = pq.top();
        pq.pop();
        ans += 1ll * tmp*tmp;
    }
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