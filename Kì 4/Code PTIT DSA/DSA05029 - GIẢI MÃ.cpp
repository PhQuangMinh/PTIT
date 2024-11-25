#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    string s;
    cin >> s;
    n=s.size();
    int f[n+5]={0};
    s=' '+s;
    f[0] = 1;
    for (int i=1;i<=n;i++){
        if (s[i]=='0'){
            if (i==1 || s[i-1]!='1' && s[i-1]!='2'){
                cout << 0;
                return;
            }
            f[i]=f[i-2];
        }
        else{
            f[i] = f[i-1];
            if (i>=2){
                if (s[i-1]=='1' || s[i-1]=='2' && s[i]<='6')
                    f[i]+=f[i-2];
            }
        }
    }
    cout << f[n];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}