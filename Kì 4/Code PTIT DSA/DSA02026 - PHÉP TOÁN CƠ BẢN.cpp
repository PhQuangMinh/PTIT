#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
string s, ans;
bool ok;
bool check(){
    int x = (s[0]-'0')*10 + (s[1]-'0');
    int y = (s[5]-'0')*10 + (s[6]-'0');
    int z = (s[10]-'0')*10 + (s[11]-'0');
    if (x<10 || y<10 || z<10) return false;
    if (s[3]=='+' && x+y==z || s[3]=='-' && x-y==z) return true;
    return false; 
}
void Try(int i){
    if (ok) return;
    if (i==s.size()){
        if (check()){
            ok = true;
            cout << s;
        }
        return;
    }
    if (s[i]=='?'){
        if (i==3){
            s[i] = '+';
            Try(i+1);
            s[i] = '-';
            Try(i+1);
        }
        else{
            for (int j='0';j<='9';j++){
                s[i] = j;
                Try(i+1); 
            }
        }
        s[i] = '?';
    }
    else{
        Try(i+1);
    }
}
void solve(){
    getline(cin, s);
    if (s[3]=='/' || s[3]=='*'){
        cout << "WRONG PROBLEM!";
        return;
    }
    ok = false;
    Try(0);

    if (!ok) cout << "WRONG PROBLEM!";
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
    cin.ignore();
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}