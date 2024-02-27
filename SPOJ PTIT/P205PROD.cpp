#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	vector<long long> v;
	v.push_back(a[1]);
	for (int i=2;i<=n;i++){
		if (a[i]==v[v.size()-1]) v.push_back(a[i]);
		else{
			int t=a[i]+v[v.size()-1];
			v.pop_back();
			v.push_back(t);
		}
	}
	cout << v.size();
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 