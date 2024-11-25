#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    int ans;
    int can=sqrt(n);
    for (int i=2;i<=can;i++){
        if (n%i==0){
            while (n%i==0){
                n/=i;
                ans=i;
            }
        }
    }
    if (n>1) cout << n;
    else cout << ans;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}