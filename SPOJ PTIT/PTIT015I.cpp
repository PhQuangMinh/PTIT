#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n, m;
	cin >> n >> m;
	int sum=0;
	int dem=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		sum+=x;
		if (sum<=m) dem++;
	}
	cout << dem << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 