#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Try(int n, char a, char b, char c){
    if (n==1){
        cout << a << " -> " << c << '\n';
        return;
    }
    Try(n-1, a, c, b);
    Try(1, a, b, c);
    Try(n-1, b, a, c);
}
void solve(){
    int n;
    cin >> n;
    Try(n, 'A', 'B', 'C');
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
    // cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}