#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void in(int n, int a[], int i){
    cout << "Buoc " << i << ": ";
    for (int i=1;i<=n;i++) cout << a[i] << ' '; 
    cout << '\n';
}
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n-1;i++){
        for (int j=i+1;j<=n;j++)
            if (a[i]>a[j]){
                swap(a[i], a[j]);
            }
        in(n, a, i);
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