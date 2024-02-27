#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void solve(){
    int n;
    cin >> n;
    if (n%2){
        cout << 0;
        return;
    }
    if (n==2){
        cout << 1;
        return;
    }
    int d=0;
    n/=2;
    for (int i=1;i*i<=n;i++)
        if (n%i==0){
            d+=2;
            if (i*i==n) d--;
        }
    cout << d;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}