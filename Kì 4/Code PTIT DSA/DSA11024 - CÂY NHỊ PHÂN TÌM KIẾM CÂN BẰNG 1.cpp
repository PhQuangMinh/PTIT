#include<bits/stdc++.h>
using namespace std;
#define tree node*
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[(n-1)/2];
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << '\n';
    }
}