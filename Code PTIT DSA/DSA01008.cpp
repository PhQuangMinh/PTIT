#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n, k;
void check(){
    int cnt=0;
    for (int i=1;i<=n;i++)
        if (a[i]) cnt++;
    if (cnt==k){
        for (int i=1;i<=n;i++) cout << a[i];
        cout << '\n';
    } 
}
void Try(int i){
    for (int j=0;j<=1;j++){
        a[i] = j;
        if (i==n){
            check();
        }
        else Try(i+1);
    }
}
void solve(){
    cin >> n >> k;
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
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
    }
}