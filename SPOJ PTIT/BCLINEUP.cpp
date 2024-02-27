#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, k;
	cin >> n >> k;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=1;i<=k;i++){
		int l, r;
		cin >> l >> r;
		int mi=a[l], ma=mi;
		for (int i=l;i<=r;i++){
			mi=min(mi, a[i]);
			ma=max(ma, a[i]);
		}
		cout << ma-mi << "\n";
	}
}