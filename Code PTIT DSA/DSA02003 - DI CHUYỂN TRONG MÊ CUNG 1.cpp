#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100][100];
vector<string> ans;
int n;
void Try(int i, int j, string s){
    if (i==j && j==n){
        ans.push_back(s);
        return;
    }
    if (a[i+1][j]==1) Try(i+1, j, s+ "D");
    if (a[i][j+1]==1) Try(i, j+1, s+ "R");
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    if (a[n][n]==0 || a[1][1]==0){
        cout << "-1";
        return;
    }
    ans.clear();
    Try(1, 1, "");
    if (ans.empty()){
        cout << -1;
        return;
    }
    sort(ans.begin(), ans.end());
    for (auto tmp:ans) cout << tmp << ' ';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}