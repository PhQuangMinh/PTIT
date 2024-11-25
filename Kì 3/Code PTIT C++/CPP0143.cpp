#include<bits/stdc++.h>
using namespace std;
long long a[100];
void solve(){
    a[1]=1;
    a[2]=1;
    for (int i=3;i<=92;i++)
        a[i]=a[i-1]+a[i-2];
}
int main(){
    int n;
    cin >> n;
    solve();
    for (int i=1;i<=n;i++){
        int x;cin >> x;
        cout << a[x];
        if (i!=n) cout << "\n";
    }
}