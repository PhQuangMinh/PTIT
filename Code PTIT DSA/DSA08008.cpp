#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
bool check(string s, int n){
    int tmp = 0;
    for (int i=0;i<s.size();i++){
        tmp = tmp*10 + (s[i]-'0');
        tmp%=n;
    }
    if (tmp) return false;
    return true;
}
void solve(){
    int n;
    cin >> n;
    queue<string> qu;
    string s="1";
    qu.push(s);
    while (1)
    {
        s = qu.front();
        qu.pop();
        if (check(s, n)){
            cout << s;
            return;
        }
        qu.push(s+"0");
        qu.push(s+"1");
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}