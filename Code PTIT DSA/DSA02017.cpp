#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int a[30], b[30], c[30];
vector<vector<int>> ans;
vector<int> tmp;
int n = 8;
void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!a[j] && !b[i + j - 1] && !c[i - j + n]) {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            tmp.push_back(j);
            if (i == n) ans.push_back(tmp);
            else Try(i + 1);
            tmp.pop_back();
            a[j] = b[i + j - 1] = c[i - j + n] = 0;
        }
    }
}
void solve(){
    int d[10][10];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> d[i][j];
        }
    }
    int res=0;
    for (auto tmp:ans){
        int sum = 0;
        for (int i=1;i<=8;i++){
            sum+=d[i][tmp[i-1]];
        }
        res = max(res, sum);
    }
    cout << res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    Try(1);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}