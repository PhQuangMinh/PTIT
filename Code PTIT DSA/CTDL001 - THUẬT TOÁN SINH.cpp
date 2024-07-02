#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int dx(int n){
    for (int i=1;i<=n/2;i++)
        if (a[i]!=a[n-i+1]) return 0;
    return 1;
}
void check(int n){
    if (dx(n)){
        for (int i=1;i<=n;i++){
            cout << a[i];
            if (i!=n) cout << " ";
        }
        cout << "\n";
    }
}
void Try(int i, int n){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n) check(n);
        else Try(i+1, n);
    }
}
void solve(){
    int n;
    cin >> n;
    Try(1, n);
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
//    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}