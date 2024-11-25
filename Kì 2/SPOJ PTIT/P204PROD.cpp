#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	int a[n+5];
	int dc=0, dl=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		if (x%2==0) dc++;
		else dl++;
	}
	if (dc==n || dl==n && n%2==0) cout << "NO";
	else cout << "YES";
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