#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, k;
void solve(){
    cin >> n >> m >> k;
    map<int, int> mp1, mp2;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp1[x]++;
    }
    for (int i=1;i<=m;i++){
        int x;
        cin >> x;
        mp2[x]++;
    } 
    vector<int> ans;
    for (int i=1;i<=k;i++){
        int x;
        cin >> x;
        if (mp1[x]>0 && mp2[x]>0) ans.push_back(x);
        mp1[x]--;
        mp2[x]--;
    }
    if (ans.empty()){
        cout << "NO";
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