#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a, m;
    cin >> a >> m;
    for (int i=0;i<m;i++)
        if (a*i%m==1){
            cout << i;
            return;
        }
    cout << -1;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}