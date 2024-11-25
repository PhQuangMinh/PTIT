#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n; 
    int a[10]={0};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[x]++;
    }  
    for (int i=0;i<=2;i++){
        for (int j=1;j<=a[i];j++)
           cout << i << " ";
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}