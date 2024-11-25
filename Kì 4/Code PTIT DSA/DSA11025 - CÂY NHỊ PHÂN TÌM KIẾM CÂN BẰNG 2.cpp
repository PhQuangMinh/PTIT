#include<bits/stdc++.h>
using namespace std;
#define tree node*
const int mod = 1e9+7;
vector<int> a;
void duyet(int l, int r){
    if (l>=r) return;
    int mid = (l+r) >> 1;
    cout << a[mid] << ' ';
    duyet(mid+1, r);
    duyet(l, mid);
}
void solve(){
    a.clear();
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.rbegin(), a.rend());
    duyet(0, n);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << '\n';
    }
}