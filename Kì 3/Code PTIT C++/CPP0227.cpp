#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5][n+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    for (int i=1;i<=n;i++){
        if (i%2){
            for (int j=1;j<=n;j++)
                cout << a[i][j] << " ";
        }
        else
            for (int j=n;j>=1;j--)
                cout << a[i][j] << " ";
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