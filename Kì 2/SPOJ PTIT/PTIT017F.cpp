#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
	if (s[0]=='0' && s.size()==1){
		cout << "YES";
		return;
	}
	int n=s.size();
	int t=s[n-2]-'0';
	t=t*10+(s[n-1]-'0');
	if (t%4!=0){
		cout << "NO";
		return;
	}
	int sum=0;
	for (int i=0;i<n;i++)
	    sum+=(s[i]-'0');
	if (sum%9==0) cout << "YES";
	else cout << "NO";
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