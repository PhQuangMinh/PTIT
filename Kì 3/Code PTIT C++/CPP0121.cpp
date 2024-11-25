#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
int uoc(int x){
    for (int i=2;i*i<=x;i++)
        if (x%i==0) return i;
    return x;
}
void solve(){
    cout << 1 << " ";
    int n;
    cin >> n;
    for (int i=2;i<=n;i++)
        cout << uoc(i);
}
int main(){
    int n=1;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}