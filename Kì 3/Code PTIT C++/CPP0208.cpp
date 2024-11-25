#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    cout << a[k];
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}