#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
void solve(){
    int n, m; 
    cin >> n >> m;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int d[m+5]={};
    d[0]=1;
    for (int i=1;i<=n;i++)
        for (int j=m;j>=1;j--){
        	if (d[j-a[i]]==1 && j>=a[i] && d[j]==0) d[j]=1;
		}
    if (d[m]==1) cout << "YES";
    else cout << "NO";
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
 