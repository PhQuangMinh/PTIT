#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
bool check(string s, string t){
    if (s.size()<t.size()|| s.size()==t.size() && s<t) return true;
    return false;
}
void solve(){
    string s;
    cin >> s;
    queue<string> qu;
    string tmp="1";
    qu.push(tmp);
    int cnt=0;
    while (1)
    {
        tmp = qu.front();
        qu.pop();
        if (check(s, tmp)){
            cout << cnt;
            return;
        }
        cnt++;
        qu.push(tmp+"0");
        qu.push(tmp+"1");
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