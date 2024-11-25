#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<string, int> mp;
vector<string> hop, giao;
int cmp(string a, string b){
    return a<b;
}
void doc1(){
    ifstream in;
    in.open("DATA1.in");
    string s;
    while (in >> s){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        mp[s]++;
        if (mp[s]==1) hop.push_back(s);
    }
}
void doc2(){
    ifstream in;
    in.open("DATA2.in");
    string s;
    while (in >> s){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (mp[s]>0) giao.push_back(s);
        else 
            if (mp[s]==0) hop.push_back(s);
        mp[s] = -1;
    }
}
void in(vector<string> tmp){
    sort(tmp.begin(), tmp.end(), cmp);
    for (int i=0;i<tmp.size();i++){
        cout << tmp[i];
        if (i!=tmp.size()-1) cout << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    doc1();
    doc2();
    in(hop);
    cout << "\n";
    in(giao);
    // for (auto x:hop) cout << x << " ";
    // cout << "\n";
    // for (auto x:giao) cout << x << " ";
}