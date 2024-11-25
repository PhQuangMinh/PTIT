#include<bits/stdc++.h>
using namespace std;
int a[10000005];
void solve(){
    int n;
    cin >> n;
    int beg=1e9, en=-1;
    memset(a, 0, sizeof(a));
    for (int i=1;i<n;i++){
        int x;
        cin >> x;
        a[x]=1;
        beg=min(x, beg);
        en=max(x, en);
    }
//    cout << beg << " " << en << " ";
    for (int i=beg;i<=en;i++){
        if (a[i]==0){
            cout << i;
            return;
        }
    }
    if (beg<=1) cout << en+1;
    else cout << beg-1; 
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
 //   solve();
}