#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int check(string s, string t){
	int n=min(s.size(), t.size());
	for (int i=0;i<n;i++)
	    if (s[i]!=t[i]) return 0;
	return 1;
}
bool cmp(string s, string t){
	if (s+t <t+s) return 1;
	return 0;
}
void solve(){
	int n;
	cin >> n;
	string s[n+5];
	for (int i=1;i<=n;i++) cin >> s[i];
	sort(s+1, s+n+1, cmp);
	for (int i=1;i<n;i++){
		if (check(s[i], s[i+1])){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}