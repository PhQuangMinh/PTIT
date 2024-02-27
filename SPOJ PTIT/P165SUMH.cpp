#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int vt;
string check(string s, string t){
	int ns=s.size();
	int nt=t.size();
	for (int i=0;i<vt;i++)
	    if (s[i]!=t[i]) return "NE";
	int i, j;
	i=ns-1, j=nt-1;
	while (i>vt){
		if (s[i]!=t[j]) return "NE";
		i--;j--;
	}
	for (int k=vt;k<=j;k++)
	    if (t[i]<'a' || t[i]>'z') return "NE";
	return "DA";
}
int main(){
	faster();
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i=0;i<s.size();i++)
	    if (s[i]=='*'){
	    	vt=i;
	    	break;
		}
	for (int i=1;i<=n;i++){
		string t;
		cin >> t;
		cout << check(s, t) << "\n";
	}
} 