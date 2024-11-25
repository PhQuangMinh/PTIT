#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void solve(){
    long long n;
    cin >> n;
    for (long long i=2;i*i<=n;i++){
        if (n%i==0){
            while (n%i==0){
                cout << i << " ";
                n/=i;
            }
        }
    }
    if (n>1) cout << n;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}