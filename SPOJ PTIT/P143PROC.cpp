#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	long long n, k, y;
	cin >> y >> k >> n;
	int ok=1;
	if (n>y){
		if (k==1){
		    for (int i=y+1;i<=n;i++)
		        cout << i-y << " ";
		    return;
		}
		int dau=y/k;
		if (dau*k<=y) dau=(dau+1)*k;
		for (int i=dau;i<=n;i+=k){
		    cout << i-y << " ";
		    ok=0;
		}
	}
	if (ok) cout << "-1";
}
int main(){
	faster();
	solve();
} 