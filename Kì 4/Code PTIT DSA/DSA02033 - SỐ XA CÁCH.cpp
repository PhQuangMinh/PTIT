#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int vt[20];
int a[20];
void check(){
    for (int i=1;i<n;i++)
        if (abs(a[i]-a[i+1])==1){
            return;
        }
    for (int i=1;i<=n;i++) cout << a[i];
    cout << '\n';
}
void Try(int i){
    for (int j=1;j<=n;j++){
        if (!vt[j]){
            vt[j] = 1;
            a[i] = j;
            if (i==n){
                check();
            }
            else Try(i+1);
            vt[j] = 0;
        }
    }
}
void solve(){
    cin >> n;
    Try(1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}