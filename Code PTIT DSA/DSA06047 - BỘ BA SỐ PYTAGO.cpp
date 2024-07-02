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
    sort(a+1, a+n+1);
    for (int i=1;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            long long x = 1ll*a[i]*a[i]+1ll*a[j]*a[j];
            if (cp(x)){
                int y = sqrt(x);
                int tmp = lower_bound(a+j+1, a+n+1, y)-a;
                if (tmp<=n && a[tmp]==y){
                    cout << "YES";
                    return;
                }
            }
        }
    }
    cout << "NO";
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