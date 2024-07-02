#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll ans;
int n;
int snt[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void Try(int i, ll a, int b){
    if (b>n){
        return;
    }
    if (b==n){
        ans = min(ans, a);
    }
    int d = 0;
    while (++d){
        if (a*snt[i]>ans) break;
        a*=snt[i];
        Try(i+1, a, b*(d+1));
    }
}
void solve(){
    cin >> n;
    ans = 1e18;
    Try(0, 1, 1);
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}