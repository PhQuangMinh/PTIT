#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(string a, string b){
	if (a+b>b+a) return 1;
	return 0;
}
void solve(){
	int n;
	cin >> n;
	string s[n+5];
	for (int i=1;i<=n;i++) cin >> s[i];
	sort(s+1, s+n+1, cmp);
	for (int i=1;i<=n;i++) cout << s[i];
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}