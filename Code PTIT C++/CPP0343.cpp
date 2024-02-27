#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin, s);
    s+=' ';
    int n=s.size();
    int cnt=0;
    int cntchan=0, cntle=0;
    for (int i=0;i<n;i++){
        if (s[i]==' '){
            int k=s[i-1]-'0';
            cnt++;
            if (k%2==1) cntle++;
            else cntchan++; 
        }
    }
    if (cnt%2==1 && cntle>cntchan || cnt%2==0 && cntle<cntchan) cout << "YES";
    else cout << "NO";
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
    cin.ignore();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}