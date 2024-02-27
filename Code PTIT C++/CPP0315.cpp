#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n=s.size();
    for (int i=n-1;i>=0;i--){
        int ok=0;
        for (int j=i+1;j<n;j++)
            if (s[i]>s[j]){
                ok=1;
                break;
            }
        if (ok==1){
            char ma='0'-1;
            int vt;
            for (int j=i+1;j<n;j++)
                if (s[j]<s[i] && s[j]>ma){
                    ma=s[j];
                    vt=j;
                }
            swap(s[i], s[vt]);
            cout << s << " " << i << " " << vt << ' ';
            sort(s.begin()+i+1, s.end());
            if (i!=0){
                cout << s;
                return;
            }
            else{
                while (s[0]=='0' && s.size()>1) s.erase(s.begin());
                cout << s;
                return;
            }
        }
    }
    cout << -1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}