#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
double kc(pair<double, double> a, pair<double, double> b){
    return pow((a.first-b.first), 2) + pow((a.second-b.second), 2);
}
void solve(){
    int n;
    cin >> n;
    vector<pair<double, double>> a(n), b(n);
    for (int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
        b[i].first = a[i].second;
        b[i].second = a[i].first;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    double ans = mod;
    for (int i=0;i<n-1;i++){
        ans = min(ans, min(kc(a[i], a[i+1]), kc(b[i], b[i+1])));
    }
    ans = sqrt(ans);
    cout << fixed << setprecision(6) << ans;
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