#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    cin.ignore();
    int a[n+5][n+5];
    for (int i=1;i<=n;i++)
       for (int j=1;j<=n;j++)
           a[i][j] = 0;
    for (int i=1;i<=n;i++){
        string s;
        getline(cin, s);
        stringstream tach(s);
        int k;
        while (tach >> k){
            a[i][k] = 1;
            a[k][i] = 1;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout << a[i][j] << ' ';
        cout << '\n';
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
    int t=1;
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}