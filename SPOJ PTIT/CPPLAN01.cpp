#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void hieu(string s, string t){
	int kq[2005]={0};
	if (s.size()<t.size() || s.size()==t.size() && s<t){
		string cmp=s;
		s=t;
		t=cmp;
	}
	int lens=s.size();
	int lent=t.size();
	int i=lens-1;
	int j=lent-1;
	int k=0, du=0;
	while (i>=0 || j>=0){
		int css, cst;
		if (i>=0) css=s[i]-'0';
		else css=0;
		if (j>=0) cst=t[j]-'0';
		else cst=0;
		int x=css - cst - du;
	    if (x<0){
	    	kq[k]=x+10;
	    	du=1;
		}
		else{
		    kq[k]=x;
			du=0;	
		}
	    k++;
	    j--;
	    i--;
	}
	k--;
	for (int i1=k;i1>=0;i1--) cout << kq[i1];
	cout << "\n";
}
void solve(){
	string a, b;
	cin >> a >> b;
	hieu(a, b);
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 