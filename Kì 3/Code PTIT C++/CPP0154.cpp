#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a, m;
    cin >> a >> m;
    int sum=0;
    for (int i=1;i<=a;i++)
        sum+=i%m;
    if (sum==m) cout << 1;
    else cout << 0;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}