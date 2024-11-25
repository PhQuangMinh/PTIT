#include<bits/stdc++.h>
using namespace std;
#define ll long long
char c;
int vt[500];
string s;
int n;
void check(){
    for (int i=1;i<n-1;i++){
        if (s[i]=='A'|| s[i]=='E'){
            if (s[i-1]!='A' && s[i-1]!='E' && s[i+1]!='A' && s[i+1]!='E'){
                return;
            }
        }
    }
    cout << s << '\n';
}
void Try(int i){
    for (char j='A';j<=c;j++){
        if (vt[j]==0){
            vt[j]=1;
            s.push_back(j);
            if (i==n){
                check();
            }
            else Try(i+1);
            vt[j]=0;
            s.pop_back();
        }
    }
}
void solve(){
    cin >> c;
    n = c-'A'+1;
    Try(1);
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