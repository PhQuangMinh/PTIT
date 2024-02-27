#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();i++)
	    if (i%2==0 && (s[i]-'0')%2==0 || i%2==1 && (s[i]-'0')%2==1){
	    	cout << "NO\n";
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