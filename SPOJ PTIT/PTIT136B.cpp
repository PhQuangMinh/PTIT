#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string dn(string s){
	int n=s.size();
	for (int i=0;i<n/2;i++){
		char t=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=t;
	}
	return s;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	string s[2*n+5];
	for (int i=1;i<=n;i++) cin >> s[i];
	int a, b;
//	for (int i=1;i<=n;i++) cout << s[i];
	cin >> a >> b;
	for (int i=1;i<=n;i++){
	    for (int j=m-1;j>=0;j--) s[i]+=s[i][j];
	}
	for (int i=2*n;i>=n+1;i--) s[i]=dn(s[2*n-i+1]);
	if (s[a][b-1]=='.') s[a][b-1]='#';
	else s[a][b-1]='.';
	for (int i=1;i<=2*n;i++) cout << s[i] << "\n";
}