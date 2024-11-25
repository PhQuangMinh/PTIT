#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int sumchan=0, sumle=0;
    for (int i=0;i<s.size();i++)
        if (i%2==0){
            sumchan+=s[i]-'0';
        }
        else sumle+=s[i]-'0';
    int tmp=abs(sumchan-sumle);
    if (tmp%11==0) cout << 1;
    else cout << 0;
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