#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	map<string, int> dem;
	int n;
	cin >> n;
	string s[n+5];
	int ans=0;
	for (int i=1;i<=n;i++) cin >> s[i];
	for (int i=1;i<=n;i++){
		if (dem[s[i]]>i-dem[s[i]]-1) ans++;
		dem[s[i]]++;
	}
	cout << ans;
}
 