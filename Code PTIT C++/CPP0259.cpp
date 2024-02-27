#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m, p;
    cin >> n >> m >> p;
    int a[n+5][m+5], b[m+5][p+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    for (int j=1;j<=m;j++)
        for (int k=1;k<=p;k++)
            cin >> b[j][k];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=p;j++){
            int sum=0;
            for (int k=1;k<=m;k++)
                sum+=a[i][k]*b[k][j];
            cout << sum << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n=1;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}