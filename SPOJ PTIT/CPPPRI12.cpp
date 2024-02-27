#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n, k;
	cin >> n >> k;
	int dem=0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			while (n%i==0){
				n/=i;
				dem++;
				if (dem==k){
					cout << i << "\n";
					return;
				}
			}
		}
	}
	if (n>1) dem++;
	if (dem==k) cout << n << "\n";
	else cout << -1 << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 