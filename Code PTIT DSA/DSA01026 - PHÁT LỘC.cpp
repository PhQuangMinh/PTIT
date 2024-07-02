#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[100];
void in(){
    int ok=1;
    if (a[1]!=1 ||a[n]!=0) ok=0;
    for (int i=1;i<n;i++)
        if (a[i]==1 && a[i+1]==1) ok=0;
    for (int i=1;i<=n-3;i++)
        if (a[i]==0 && a[i+1]==0 && a[i+2]==0 && a[i+3]==0) ok=0;
    if (ok){
        for (int i=1;i<=n;i++)
            if (a[i]==1) cout << 8;
            else cout << 6;
        cout << "\n";
    }
}
void Try(int i){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n) in();
        else Try(i+1);
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
    int n=1;
    // cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}