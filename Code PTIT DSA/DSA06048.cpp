#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int cp(long long x){
    long long tmp = sqrt(x);
    return tmp*tmp==x;
}
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i=1;i<n;i++){
        if (a[i]>a[i+1]){
            cout << i;
            return;
        }
    }
    cout << 0;
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
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}