#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n >> k;
    int a[k+5];
    for (int i=1;i<=k;i++) cin >> a[i];
    int i = k;
    while (i>0 && a[i]==n-k+i) i--;
    if (i==0){
        for (int i=1;i<=k;i++) cout << i << " ";
    }
    else{
        a[i]++;
        for (int j=i+1;j<=k;j++) a[j]= a[j-1]+1;
        for (int j=1;j<=k;j++) cout << a[j] << " ";
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