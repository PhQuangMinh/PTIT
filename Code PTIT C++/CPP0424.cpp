#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k, n;
    cin >> k >> n;
    priority_queue<int, vector<int>, greater<int>> pri;
    for (int i=1;i<=k;i++)
        for (int j=1;j<=n;j++){
            int x;
            cin >> x;
            pri.push(x);
        }
    while (!pri.empty()){
        cout << pri.top() << " ";
        pri.pop();
    }
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
//    solve();
}