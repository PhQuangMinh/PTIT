#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	float canh=2.0/(1.0-(n/180.0));
	if ((int)canh==canh) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 