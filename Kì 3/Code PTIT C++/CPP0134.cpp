#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int d=0;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            while (n%i==0){
                d++;
                n/=i;
                if (d==k){
                    cout << i;
                    return;
                }
            }
        }
    }
    if (n>1 && d==k-1){
        cout << n;
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