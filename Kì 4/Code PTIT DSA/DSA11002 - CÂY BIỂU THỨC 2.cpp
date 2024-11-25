#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
bool checkdau(string s){
    return s=="+" || s=="-" || s=="*" || s=="/";
}
int cal(int a, int b, string dau){
    if (dau=="+") return a+b;
    if (dau=="-") return a-b;
    if (dau=="*") return a*b;
    return a/b;
}
void solve(){
    int n;
    cin >> n;
    stack<string> dau;
    stack<int> tmp;
    queue<int> so;
    for (int i=1;i<=n;i++){
        string s;
        cin >> s;
        if (checkdau(s)) dau.push(s);
        else tmp.push(stoi(s));
    }
    while (!tmp.empty()){
        so.push(tmp.top());
        tmp.pop();
    }
    while (!dau.empty()){
        queue<int> tmp;
        while (!so.empty()){
            int tmp1 = so.front();
            so.pop();
            int tmp2 = so.front();
            so.pop();
            tmp.push(cal(tmp2, tmp1, dau.top()));
  //          cout << tmp1 << ' ' << tmp2 << ' ' << dau.top() << " " << cal(tmp1, tmp2, dau.top()) << '\n';
            dau.pop();
        }
        so = tmp;
    }
    cout << so.front();
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}