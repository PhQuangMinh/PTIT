#include<bits/stdc++.h>
using namespace std;
int dx[10]={-1, -1, -1, 0, 0, 1, 1, 1};
int dy[10]={-1, 0, 1, -1, 1, -1, 0, 1};
int a[105][105]={0};
void process(int x, int y){
    for (int i=0;i<8;i++){
        if (a[x+dx[i]][y+dy[i]]==1){
            a[x+dx[i]][y+dy[i]]=0;
            process(x+dx[i], y+dy[i]);
        }
    }
}
void solve(){
    int n, m;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) cin >> a[i][j];
    int ans=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            if (a[i][j]==1){
                ans++;
                a[i][j]=0;
                process(i, j);
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}