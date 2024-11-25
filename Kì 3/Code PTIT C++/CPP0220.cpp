#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5][n+5];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int x;
            cin >> x;
            if (i==1 || i==n || j==1 || j==n) cout << x << ' ';
            else cout << " ";
        }
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