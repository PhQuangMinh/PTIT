#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n, r;
	string s;
	cin >> n >> r >> s;
	cout << n << " ";
	for (int i=0;i<s.size();i++){
		for (int j=1;j<=r;j++) cout << s[i];
	}
	cout << "\n";
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 