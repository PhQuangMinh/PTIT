#include<bits/stdc++.h>
using namespace std;
void solve(){
    char c;
    cin >> c;
    if (c>='a' && c<='z') cout << (char)(c-32);
    else cout << (char)(c+32);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}