#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
string convert(string s){
    for (int i = 0;i<s.size();i++){
        if (s[i]<'0' || s[i]>'9') s[i] = ' ';
    }
    return s;
}
int to_int(string s){
    int tmp = 0;
    for (auto x:s){
        tmp = tmp*10 + (x-'0');
    }
    return tmp;
}
vector<int> tach(string s){
    vector<int> st;
    stringstream ss(s);
    string k;
    while (ss>>k){
        st.push_back(to_int(k));
    }
    return st;
}
void solve(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    s = convert(s);
    t = convert(t);
    vector<int> sos = tach(s);
    vector<int> sot = tach(t);
    vector<pair<int, int>> vt;
    int i = sos.size()-1, j = sot.size()-1;
    while (i>=0 && j>=0){
        if (sos[i]>sot[j]){
            vt.push_back({sot[j-1], sot[j]});
            j-=2;
        }
        else
            if (sos[i]<sot[j]){
                vt.push_back({sos[i-1], sos[i]});
                i-=2; 
            }
            else{
                vt.push_back({sot[j-1]+sos[i-1], sot[j]});
                j-=2;i-=2;
            }
    }
    while (i>=0){
        vt.push_back({sos[i-1], sos[i]});
        i-=2; 
    }
    while (j>=0){
        vt.push_back({sot[j-1], sot[j]});
        j-=2; 
    }
    for (int i=vt.size()-1;i>=0;i--){
        cout << vt[i].first << "*x^" << vt[i].second;
        if (i!=0) cout << " + ";
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
    cin.ignore();
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}