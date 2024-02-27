#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n, k;
void in(){
    for (int i=1;i<=k;i++) cout << (char)(a[i]+64);
    cout << '\n';        
}
void Try(int i){
    for (int j =a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k){
            in();
        }
        else Try(i+1);
    }
}
void solve(){
    cin >> n >> k;
    for (int i=1;i<=n;i++) a[i]=i;
    Try(1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}