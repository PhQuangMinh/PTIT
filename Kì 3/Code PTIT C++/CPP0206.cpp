#include<bits/stdc++.h>
using namespace std;
int a[100005];
void solve(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    cout << *max_element(a, a+n);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}