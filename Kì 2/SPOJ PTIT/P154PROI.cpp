#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
	int n=s.size();
	for (int i=0;i<n/2;i++)
	    if (abs(s[i]-s[i+1])!=abs(s[n-i-2]-s[n-i-1])){
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