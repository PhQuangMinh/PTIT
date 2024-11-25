#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> l, c;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        if (i%2) l.push_back(x);
        else c.push_back(x);
    }
    sort(l.begin(), l.end());
    sort(c.rbegin(), c.rend());
    for (int i=1;i<=n/2;i++){
        cout << l[i-1] << ' ';
        cout << c[i-1] << ' ';
    }
    if (n%2) cout << l.back();
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