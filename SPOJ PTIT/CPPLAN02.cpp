#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void sum (string s, string t){
	int lens=s.size();
	int lent=t.size();
	int kq[10000];
	int n=0;
	int i=lens-1, j=lent-1;
	int du=0;
	while (i>=0 || j>=0){
		int t1=(i>=0) ? s[i]-'0' : 0;
		int t2=(j>=0) ? t[j]-'0' : 0;
		int tong=t1+t2+du;
//		cout << t1 << " " << t2 << " " << tong  << "\n";
		kq[n]=(tong %10);
		if (tong>=10) du=1;
		else du=0;
		n++;
		i--;j--;
	}
	if (du==1) cout << "1";
	for (int i=n-1;i>=0;i--) cout << kq[i];
	cout << "\n";
}
void solve(){
	string s, t;
	cin >> s >> t;
	sum(s, t);
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 