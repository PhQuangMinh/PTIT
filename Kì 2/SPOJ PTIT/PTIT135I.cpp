#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int n=s.size(), d=1;
	for (int i=1;i<n;i++){
	    if (s[i]==s[i-1]) d++;
	    else{
	    	cout << d << s[i-1];
	    	d=1;
		}
	}
	cout << d << s[n-1] << "\n";
}
int main(){
	int n;
	cin >> n;
	while (n--) solve();
} 