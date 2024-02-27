#include<bits/stdc++.h>
using namespace std;
#define ll long long
int convert(int a, int c){
    int d = 1;
    int b=0;
    while (a){
        int k = a%10;
        a/=10;
        if (k==5 || k==6) k = c;
        b = d*k+b;
        d*=10;
    }
    return b;
}
void solve(){
    int a, b;
    cin >> a >> b;
    a = convert(a, 5);
    b = convert(b, 5);
    cout << a + b << ' ';
    a = convert(a, 6);
    b = convert(b, 6);
    cout << a + b;
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