#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int test;
	cin >> test;
	string s;
	cin >> s;
	int a[10]={0};
	for (int i=0;i<s.size()-2;i++){
		if (s[i]=='T' && s[i+1]=='T' && s[i+2]=='T') a[1]++;
		if (s[i]=='T' && s[i+1]=='T' && s[i+2]=='H') a[2]++;
		if (s[i]=='T' && s[i+1]=='H' && s[i+2]=='T') a[3]++;
		if (s[i]=='T' && s[i+1]=='H' && s[i+2]=='H') a[4]++;
		if (s[i]=='H' && s[i+1]=='T' && s[i+2]=='T') a[5]++;
		if (s[i]=='H' && s[i+1]=='T' && s[i+2]=='H') a[6]++;
		if (s[i]=='H' && s[i+1]=='H' && s[i+2]=='T') a[7]++;
		if (s[i]=='H' && s[i+1]=='H' && s[i+2]=='H') a[8]++;
	}
	cout << test;
	for (int i=1;i<=8;i++) cout << " " << a[i];
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}