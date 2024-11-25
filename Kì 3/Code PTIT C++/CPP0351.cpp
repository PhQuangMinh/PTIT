#include<bits/stdc++.h>
using namespace std;
#define ll long long
void k1(vector<string> tmp){
    cout << tmp[tmp.size()-1];
    for (int i=0;i<tmp.size()-1;i++)
        cout << " " << tmp[i];
}
void k2(vector<string> tmp){
    for (int i=1;i<tmp.size();i++)
        cout << tmp[i] << " ";
    cout << tmp[0];
}
void solve(){
    int k;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<string> tmp;
    string x;
    stringstream tach(s);
    while (tach >> x){
        x[0] = toupper(x[0]);
        tmp.push_back(x);
    }
    if (k==1){
        k1(tmp);
    }
    else k2(tmp);
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
//    solve();
}