#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string tich(string s, string t){
	int kq[2005]={0};
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
void chia(string s, long long c){
    long long t=0;
	int n=s.size();
	for (int i=0;i<n;i++){
		t=t*10+(s[i]-'0');
		t=t%c;
	}
	cout << t << "\n";
}
void solve(){
	string a, b;
	long long c;
	cin >> a >> b >> c;
	string t=tich(a, b);
	chia(t, c);
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 