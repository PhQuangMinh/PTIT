#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n;
	cin >> n;
	int dem=0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			dem++;
			int d=0;
			while (n%i==0){
				n/=i;
				d++;
			}
			if (d>1){
				cout << 0 << "\n";
				return;
			}
		}
	}
	if (n>1) dem++;
	if (dem==3) cout << 1 << "\n";
	else cout << 0 << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}