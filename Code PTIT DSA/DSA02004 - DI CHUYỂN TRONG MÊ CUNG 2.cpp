#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int a[15][15];
int n;
int dx[5] = {1, 0, 0, -1};
int dy[5] = {0, -1, 1, 0};
string m = "DLRU";
vector<string> ans;
void Try(int i, int j, string s){
    if (i==n && j==n){
        ans.push_back(s);
        return;
    }
    for (int k=0;k<4;k++){
        int x = i+dx[k];
        int y = j+dy[k];
        if (a[x][y]==1 && x>=1 && y>=1 && x<=n && y<=n){
            a[x][y] = 0;
            Try(x, y, s+m[k]);
            a[x][y] = 1;
        }
    }
}
void solve(){
    cin >> n;
    for (int i=0;i<=n+1;i++)
        for (int j=0;j<=n+1;j++){
            if (i==0 || j==0 || i==n+1 || j==n+1) a[i][j] = 0;
            else cin >> a[i][j];
        }
    if (a[1][1] == 0 || a[n][n]==0){
        cout << -1;
        return;
    }
    ans.clear();
    a[1][1]= 0;
    Try(1, 1, "");
    if (ans.empty()){
        cout << -1;
        return;
    }
    sort(ans.begin(), ans.end());
    for (auto x:ans) cout << x << ' ';
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