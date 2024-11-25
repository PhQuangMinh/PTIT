#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a1[n+5]={0}, a2[n+5]={0};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a1[i]=a1[i-1]+x;
    }
    for (int j=1;j<=n;j++){
        int x;
        cin >> x;
        a2[j]=a2[j-1]+x;
    }
    int ans=0;
    for (int i=1;i<=n;i++)
        for (int j=i;j<=n;j++){
            if (a1[j]-a1[i-1]==a2[j]-a2[i-1]){
                ans=max(ans, j-i+1);
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}