#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void solve(){
    int n, d;
    cin >> n >> d;
    d%=n;
    for (int i=n-d+1;i<=n;i++)
        cin >> a[i];
    for (int i=1;i<=n-d;i++)
        cin >> a[i];
    for (int i=1;i<=n;i++)
        cout << a[i] << " ";
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}