#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int a[105], s;
int ok;
int n, k;
void Try(int sum, int cnt){
    if (ok) return;
    if (cnt==k){
        ok = 1;
        return;
    }
    for (int i=1;i<=n;i++){
        if (sum==s) Try(0, cnt+1);
        else
            if (sum<s) Try(sum+a[i], cnt);
            else return;
    }
}
void solve(){
    cin >> n >> k;
    int sum = 0;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    if (sum%k!=0){
        cout << 0;
        return;
    }
    s = sum/k;
    ok = 0;
    Try(0, 0);
    cout << ok;
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