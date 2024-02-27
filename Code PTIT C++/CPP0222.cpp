#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int dem[100005]={0};
    int check[100005];
    for (int i=1;i<=n;i++){
        memset(check, 0, sizeof(check));
        for (int j=1;j<=n;j++){
            int x;
            cin >> x;
            if (check[x]==0){
                check[x]=1;
                dem[x]++;
            }
        }
    }
    int ans=0;
    for (int i=1;i<=100000;i++)
        if (dem[i]==n) ans++;
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }

}