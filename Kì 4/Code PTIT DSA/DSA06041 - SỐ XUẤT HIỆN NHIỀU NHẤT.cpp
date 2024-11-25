#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, k;
void solve(){
    cin >> n;;
    map<int, int> mp;
    pair<int, int> ans;
    ans.second = 0;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp[x]++;
        if (mp[x]>ans.second){
            ans.second = mp[x];
            ans.first = x;
        }
    }
    if (ans.second>n/2) cout << ans.first;
    else cout << "NO";
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