#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int ans[105][105]={0};
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            if (x){
                for (int i1=1;i1<=n;i1++) ans[i1][j]=1;
                for (int j1=1;j1<=m;j1++) ans[i][j1]=1;
            }
        }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}