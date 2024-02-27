#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            int d=0;
            while (n%i==0){
                d++;
                n/=i;
            }
            cout << i << " " << d << " ";
        }
    }
    if (n>1) cout << n << " " << 1;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}