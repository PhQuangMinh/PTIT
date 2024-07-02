#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005];
int n;
ll ans;
ll merge(ll a[], int l, int r, int m){
	ll cnt = 0;
	vector<ll> x(a+l, a+m+1);
	vector<ll> y(a+m+1, a+r+1);
	int i=0, j = 0;
	while (i<x.size() && j<y.size()){
		if (x[i]<=y[j]){
			a[l++] = x[i++];
		}
		else{
			a[l++] = y[j++];
			cnt+=x.size()-i;
		}
	}
	while (i<x.size()) a[l++] = x[i++];
	while (j<y.size()) a[l++] = y[j++];
	return cnt;
}
ll mergeSort(ll a[], int l, int r){
	ll ans = 0;
	if (l<r){
		int mid =(l+r)/2;
		ans += mergeSort(a, l, mid);
		ans += mergeSort(a, mid+1, r);
		ans += merge(a, l, r, mid);
	}
	return ans;
}
void solve(){
	cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i];
	cout << mergeSort(a, 1, n);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}