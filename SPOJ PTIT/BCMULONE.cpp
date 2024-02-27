#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string chia(string s){
	int t=0;
	int n=s.size();
	string res="";
	for (int i=0;i<n;i++){
		t=t*10+(s[i]-'0');
		char k=(t/81)+'0';
		res+=k;
		t%=81;
	}
	while (res[0]=='0' && res.size()>1) res.erase(res.begin());
	return res;
}
void solve(){
	int n;
	cin >> n;
	string s="";
	for (int i=1;i<=n-1;i++) s+='9';
	s+='8';
	for (int i=1;i<=n-1;i++) s+='0';
	s+='1';
	cout << chia(s);
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