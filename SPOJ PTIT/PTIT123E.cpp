#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string tong(string s, string t){
	string res="";
	int lens=s.size();
	int lent=t.size();
	int i=lens-1;
	int j=lent-1;
	int k=0, du=0;
	while (i>=0 || j>=0){
		int css= (i>=0) ? s[i]-'0' : 0;
		int cst= (j>=0) ? t[j]-'0' : 0;
		int x=css + cst + du;
		char k=(x%10)+'0';
	    res=k+res;
	    du=x/10;
	    j--;
	    i--;
	}
	if (du>0) res='1'+res;
	return res;
}
int check(string s, string t){
	int ds[20]={0};
	for (int i=0;i<s.size();i++)
	    ds[s[i]-'0']++;
	int dt[20]={0};
	for (int j=0;j<t.size();j++)
	    dt[t[j]-'0']++;
	for (int i=0;i<=9;i++)
	    if (ds[i]!=dt[i]) return 0;
	return 1;
}
int main(){
	faster();
	string s;
	while (getline(cin, s, '\n')){
		string res=s;
		int ok=1;
		int n=s.size();
		for (int i=1;i<=n-1;i++){
			res=tong(res, s);
//			cout << res << " ";
			if (check(res, s)==0){
				ok=0;
				break;
			}
		}
		if (ok) cout << s << " is cyclic\n";
		else cout << s << " is not cyclic\n";
	}
}