#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void solve(){
    int n;
    cin >> n;
    int d=0;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            d++;
            int dem=0;
            while (n%i==0){
                n/=i;
                dem++;
            }
            if (dem>1){
                cout << 0;
                return;
            }
        }
    }
    if (n>1) d++;
    if (d==3) cout << 1;
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