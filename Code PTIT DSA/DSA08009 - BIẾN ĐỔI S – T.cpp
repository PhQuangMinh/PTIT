#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int a, b;
    cin >> a >> b;
    if (a>=b){
        cout << a - b;
        return;
    }
    map<int, int> mp;
    queue<pair<int, int>> qu;   
    qu.push({a, 0});
    while (!qu.empty()){
        pair<int, int> u = qu.front();
        qu.pop();
        if (u.first == b){
            cout << u.second;
            return;
        }
        if (u.first*2 == b || u.first-1==b){
            cout << u.second+1;
            return;
        }
        if (u.first*2<=b*2 && mp[u.first*2]==0) {
            qu.push({u.first*2, u.second+1});
            mp[u.first*2] = 1;
        }
        if (u.first-1>0 && mp[u.first-1]==0) {
            qu.push({u.first-1, u.second+1});
            mp[u.first-1] = 1;
        }
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}