#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int i=n-1;
    while (i>0 && a[i]>a[i+1]) i--;
    if (i==0){
        for (int i=1;i<=n;i++) cout << i << " ";
    }
    else{
        for (int j=n;j>=1;j--)
            if (a[j]>a[i]){
                swap(a[i], a[j]);
                break;
            }
        int l=i+1, r=n;
        while (l<=r){
            swap(a[l], a[r]);
            l++;r--;
        }
        for (int i=1;i<=n;i++) cout << a[i] << " ";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}