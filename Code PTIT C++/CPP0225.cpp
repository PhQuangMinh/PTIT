#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5][n+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++) cin >> a[i][j];
    int hang[105]={0}, hangmax=0, cot[105]={0}, cotmax=0;
    for (int i=1;i<=n;i++){
        int sumhang=0, sumcot=0;
        for (int j=1;j<=n;j++){
            sumhang+=a[i][j];
            sumcot+=a[j][i];
        }
        hang[i]=sumhang;
        cot[i]=sumcot;
        hangmax=max(sumhang, hangmax);
        cotmax=max(cotmax, sumcot);
    }
    cout << hangmax << " " << cotmax << "\n";
    int ans=0;
    for (int i=1;i<=n;i++){
        ans+=max((hangmax-hang[i]), (cotmax-cot[i]));
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}