#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct cta{
	string x;
	int sl;
};
int count(string s, string t){
	string b[5];
	b[1]="qwertyuiop";
	b[2]="asdfghjkl";
	b[3]="zxcvbnm";
	int n=s.size();
	int sum=0;
	for (int i=0;i<n;i++){
		int cs, hs, ct, ht;
		for (int j=1;j<=3;j++)
		    for (int k=0;k<b[j].size();k++){
		        if (b[j][k]==s[i]){
		        	hs=j;
		        	cs=k;
				}
				if (b[j][k]==t[i]){
				    ht=j;
				    ct=k;
				}
			}
		sum+=abs(hs-ht)+abs(cs-ct);
	}
	return sum;
}
bool cmp(cta a, cta b){
	if (a.sl<b.sl || a.sl==b.sl && a.x+b.x<b.x+a.x) return 1;
	return 0;
}
void solve(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	cta a[100];
	for (int i=1;i<=n;i++){
		cin >> a[i].x;
		a[i].sl=count(s, a[i].x);
	}
	sort(a+1, a+n+1, cmp);
	for (int i=1;i<=n;i++) cout << a[i].x << " " << a[i].sl << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
//	    if (i!=n) cout << "\n";
	}
} 