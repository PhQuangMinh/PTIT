#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    int l=1, r=1;
    int j=1;
    for (int i=n;i>=1;i--){
        cout << a[i] << " ";
        if (i>j) cout << a[j] << " ";
        j++;
        if (j>=i) break;
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}