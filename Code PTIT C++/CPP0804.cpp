#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cmp(string a, string b){
    return a<b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("VANBAN.in", "r", stdin);
    string s;
    int dem[2000] = {0};
    map<string, int> mp;
    vector<string> vt;
    while (cin >> s){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        mp[s]++;
        if (mp[s]==1) vt.push_back(s);
    }
    sort(vt.begin(), vt.end(), cmp);
    for (string s:vt) cout << s << "\n";
}