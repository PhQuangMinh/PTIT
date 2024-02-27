#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	int dem=0;
	for (int i=1;i<=n;i++){
		long long x;
		cin >> x;
		if (x!=0) cout << x << " ";
		else dem++;
	}
	for (int i=1;i<=dem;i++) cout << "0 ";
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 