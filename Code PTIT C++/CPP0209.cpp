#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q;
    int a[100005]={0};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[i]=a[i-1]+x;
    }
    for (int i=1;i<=q;i++){
        int l, r;
        cin >> l >> r;
        cout << a[r]-a[l-1];
        if (i!=q) cout << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}