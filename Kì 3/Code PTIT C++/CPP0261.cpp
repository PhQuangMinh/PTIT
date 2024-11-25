#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5][n+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    int m;
    cin >> m;
    int b[m+5][m+5];
    for (int i=1;i<=m;i++)
        for (int j=1;j<=m;j++)
            cin >> b[i][j];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j+=m){
            int h=i%m;
            if (h==0) h+=m;
            for (int k=j;k<j+m;k++)
                a[i][k]=a[i][k]*b[h][k-j+1];
        }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout << a[i][j] << " ";
        cout << "\n";
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
    // for (int i=1;i<=n;i++){
    //     solve();
    //     if (i!=n) cout << "\n";
    // }
    solve();
}