#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n, k;
	cin >> n >> k;
	int a[k+5];
	for (int i=1;i<=k;i++) cin >> a[i];
	if (a[k]<n){
		cout << 1 << "\n";
		return;
	}
	if (a[1]==n-k+1){
		cout << k << "\n";
		return;
	}
	int vt;
	for (int i=k-1;i>=1;i--){
		if (a[i]!=a[i+1]-1){
			vt=i;
			break;
		}
	}
	int res=0;
	for (int i=a[vt]+1;i<=a[vt]+k-vt+1;i++){
		int ok=1;
		for (int j=1;j<=k;j++)
		    if (a[j]==i){
		    	ok=0;
		    	break;
			}
		if (ok) res++;
	}
	cout << res << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}