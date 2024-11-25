#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string tich(string s, string t){
	int kq[10000]={0};
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
int cmp(string s, string t){
	if (s.size()<t.size() || s.size()==t.size() && s<=t) return 1;
	return 0;
}
int main(){
	faster();
    string l, r, t;
    cin >> l >> r >> t;
    string res="1";
    int ok=0;
    while (cmp(res, r)){
    	if (cmp(l, res) && cmp(res, r)){
    		cout << res << " ";
    		ok=1;
		}
		res=tich(res, t);
	}
    if (ok==0) cout << "-1";
}