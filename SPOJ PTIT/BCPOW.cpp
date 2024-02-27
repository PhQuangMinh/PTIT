#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string tong(string s, string t){
	string kq;
	int lens=s.size();
	int lent=t.size();
	int i=lens-1;
	int j=lent-1;
	int k=0, du=0;
	while (i>=0 || j>=0){
		int css= (i>=0) ? s[i]-'0' : 0;
		int cst= (j>=0) ? t[j]-'0' : 0;
		int x=css + cst + du;
		char t=(x%10)+'0';
	    kq=t+kq;
	    du=x/10;
	    k++;
	    j--;
	    i--;
	}
	if (du>0) kq='1'+kq;
	return kq;
}
string tich(string s, int t){
	int lens=s.size();
	string kq;
	int du=0;
	for (int i=lens-1;i>=0;i--){
		int s1=s[i]-'0';
		int tong = t*s1 + du;
		char t1=(tong%10)+'0';
		kq=t1+kq;
		du=tong/10;
	}
	if (du>0){
		char k=du+'0';
		kq=k+kq;
	}
	return kq;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	string kq1="1", kq2="1";
	for (int i=1;i<=n;i++){
	    kq1=tich(kq1, 2);
//	    cout << kq1 << "\n";
	}
	for (int j=1;j<=m;j++)
	    kq2=tich(kq2, 3);
	string res=tong(kq1, kq2);
//	cout << kq1 << " " << kq2 << " " << res << "\n";
    cout << res[0];
}
 