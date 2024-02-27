#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct tg{
    int bd, kt;
};
int cmp(tg a, tg b){
    if (a.kt<b.kt || a.bd>b.bd && a.kt==b.kt) return 1;
    return 0;
}
void solve(){
    int n;
    cin >> n;
    tg a[n+5];
    int sum=0;
    for (int i=1;i<=n;i++) cin >> a[i].bd;
    for (int i=1;i<=n;i++) cin >> a[i].kt;
    sort(a+1, a+n+1, cmp);
    int ht = a[1].kt;
    int ans = 1;
    for (int i=2;i<=n;i++){
        if (a[i].bd>=ht){
            ans++;
            ht=a[i].kt;
        }
    }
    cout << ans;
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