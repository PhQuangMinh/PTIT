#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int gt(int x, int y){
	int dem=0;
	while (x!=0){
		dem+=x/y;
		x/=y;
	}
	return dem;
}
void solve(){
	int n, k;
	cin >> n >> k;
	cout << gt(n, k) << "\n";
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
} 