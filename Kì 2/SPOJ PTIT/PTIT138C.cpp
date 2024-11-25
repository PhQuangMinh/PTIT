#include<bits/stdc++.h>
using namespace std;
int check(string t){
	int len=t.size();
	for (int i=0;i<len;i++)
	    if (t[i]!=t[len-i-1]) return 0;
	return 1;
}
void solve(){
	string s;
	getline(cin, s);
	int dem=0;
	int len=s.size();
	string t="";
	for (int i=0;i<len;i++){
	    s[i]=toupper(s[i]);
	    if (s[i]=='A' || s[i]=='B' || s[i]=='C') t = t + '2';
	    if (s[i]=='D' || s[i]=='E' || s[i]=='F') t = t + '3';
	    if (s[i]=='G' || s[i]=='H' || s[i]=='I') t = t + '4';
	    if (s[i]=='J' || s[i]=='K' || s[i]=='L') t = t + '5';
	    if (s[i]=='M' || s[i]=='N' || s[i]=='O') t = t + '6';
	    if (s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S') t = t + '7';
	    if (s[i]=='T' || s[i]=='U' || s[i]=='V') t = t + '8';
	    if (s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z') t = t + '9';
	}
	if (check(t)) cout << "YES";
	else cout << "NO";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--) solve();
} 