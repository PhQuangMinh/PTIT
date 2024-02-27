#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(string s, int l){
	char ma='a';
	int max;
	for (int i=l;i<s.size();i++)
	    if (ma<=s[i]){
		    ma=s[i];
		    max=i;
		}
	for (int i=l;i<=max;i++)
	    if (s[i]==ma) cout << s[i];
	if (max<s.size()-1) solve(s, max+1);
	else return;
}
int main(){
	faster();
	string s;
	cin >> s;
	solve(s, 0);
}
 
 