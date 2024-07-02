#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
struct work{
    int jo, de, pr;
};
int cmp(work x, work y){
    if (x.pr>y.pr || x.pr == y.pr && x.de>y.de) return 1;
    return 0; 
}
void solve(){
    int n;
    cin >> n;
    work a[n+5];
    for (int i=1;i<=n;i++){
        cin >> a[i].jo >> a[i].de >> a[i].pr;
    }
    sort(a+1, a+n+1, cmp);
    pair<int, int> ans;
    ans.first = 0;
    ans.second = 0;
    int d[1005] = {0};
    for (int i=1;i<=n;i++){
        for (int j = a[i].de;j>=1;j--){
            if (!d[j]){
                d[j] = 1;
                ans.first++;
                ans.second +=a[i].pr;
                break;
            }
        }
    }
    cout << ans.first << ' ' << ans.second;
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