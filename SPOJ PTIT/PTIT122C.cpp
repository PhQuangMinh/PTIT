#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string tich(string s, string t){
	int kq[100000]={0};
	int lens=s.size();
	int lent=t.size();
	int x=0, y;
	for (int i=lens-1;i>=0;i--){
		int du=0;
		int s1=s[i]-'0';
		y=0;
		for (int j=lent-1;j>=0;j--){
			int t1=t[j]-'0';
			int tong = t1*s1 + du + kq[x+y];
			kq[x+y]=tong%10;
			du=tong/10;
			y++;
		}
		if (du>0) kq[x+y]=du;
		x++;
	}
	int k=lens+lent-1;
	string kq1="";
	for (int i=k;i>=0;i--){
		char t1=kq[i]+'0';
		kq1=kq1+t1;
	}
	while (kq1[0]=='0') kq1.erase(kq1.begin());
	return kq1;
}
void solve(){
	int n, k;
	cin >> n >> k;
	string s="1";
    for (int i=1;i<=n;i++){
    	ostringstream convert;
    	convert << i;
    	string k;
    	k=convert.str();
    	s=tich(s, k);
//    	cout << s << " " << k << "\n";
	}
	int ans=0;
	for (int i=0;i<s.size();i++)
	    if (s[i]-'0'==k) ans++;
	cout << ans << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 