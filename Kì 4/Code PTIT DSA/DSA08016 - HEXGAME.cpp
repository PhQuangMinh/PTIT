#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> beg;
    for (int i=1;i<=10;i++){
        int x;
        cin >> x;
        beg.push_back(x);
    }
    vector<int> dest;
    dest={1, 2, 3, 8, 0, 0, 4, 7, 6, 5};
    if (dest==beg){
        cout << 0;
        return;
    }
    queue<pair<vector<int>, int>> qu;
    qu.push({beg, 0});
    map<vector<int>, int> f;
    while (qu.size()){
        pair<vector<int>, int> v=qu.front();
        qu.pop();
        if (f[v.first]==0) f[v.first]=v.second;
        if (v.second>=16) break;
        vector<int> u=v.first;
        vector<int> tmp={u[0], u[4], u[1], u[3], u[8], u[5], u[2], u[7], u[9], u[6]};
        qu.push({tmp, v.second+1});
        tmp={u[3], u[0], u[2], u[7], u[4], u[1], u[6], u[8], u[5], u[9]};
        qu.push({tmp, v.second+1});
    }
    queue<pair<vector<int>, int>> qu1;
    qu1.push({dest, 0});
    int ans=1e9;
    while (qu1.size()){
        pair<vector<int>, int> v=qu1.front();
        qu1.pop();
        if (f[v.first]) ans=min(ans, f[v.first]+v.second);
        if (v.second>=16) break;
        vector<int> u=v.first;
        vector<int> tmp={u[1], u[5], u[2], u[0], u[4], u[8], u[6], u[3], u[7], u[9]};
        qu1.push({tmp, v.second+1});
        tmp={u[0], u[2], u[6], u[3], u[1], u[5], u[9], u[7], u[4], u[8]};
        qu1.push({tmp, v.second+1});
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
// 1 0
// 2 1
// 3 2
// 8 3
// 0 4
// 0 5
// 4 6
// 7 7
// 6 8
// 5 9

// 1 3 4
// 8 2 0 5
// 7 0 6