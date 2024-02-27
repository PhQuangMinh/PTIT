#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> a;
    int n, m;
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i=1;i<=m;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for (auto x:a) cout << x << " ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}