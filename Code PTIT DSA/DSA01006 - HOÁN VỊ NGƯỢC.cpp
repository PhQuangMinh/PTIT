#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n;
void in(){
    for (int i=1;i<=n;i++) cout << a[i];
    cout << ' ';
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++) a[i]=n-i+1;
    while (1){
        in();
        int k = n-1;
        while (k>0 && a[k]<a[k+1]) k--;
        if (k==0) return;
        for (int j=n;j>=1;j--)
            if (a[j]<a[k]){
                swap(a[k], a[j]);
                break;
            }
        int l=k+1, r=n;
        while (l<=r){
            swap(a[l], a[r]);
            l++;r--;
        }
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