#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string k;
    vector<string> xau;
    while (ss >> k){
        xau.push_back(k);
    }
    int n=xau.size();
    for (int i=0;i<n;i++){
        if (i==n-1){
            for (int j=0;j<xau[i].size();j++)
                xau[i][j]=toupper(xau[i][j]);
            break;
        }
        for (int j=0;j<xau[i].size();j++){
            if (j==0) xau[i][j]=toupper(xau[i][j]);
            else xau[i][j] = tolower(xau[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        cout << xau[i];
        if (i==n-2) cout << ", ";
        else 
            if (i<n-2) cout << " "; 
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    // int n;
    // cin >> n;
    // for (int i=1;i<=n;i++){
    //     solve();
    //     if (i!=n) cout << "\n";
    // }
    solve();
}