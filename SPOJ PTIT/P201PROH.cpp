#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	long long a, b;
	cin >> a >> b;
	if (a==1){
		if (b==1) cout << "YES";
		else cout << "NO";
		cout << "\n";
		return;
	}
	if (a==2 || a==3){
		if (b>3) cout << "NO\n";
		else cout << "YES\n";
		return;
	}
	cout << "YES\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 