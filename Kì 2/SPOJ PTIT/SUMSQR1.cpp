#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string tich (string s, string t){
	int lens=s.size();
	int lent=t.size();
	int kq[2010]={0};
	int x=0, y;
	for (int i=lens-1;i>=0;i--){
		int t1=s[i]-'0';
		y=0;
		int du=0;
		for (int j=lent-1;j>=0;j--){
			int t2=t[j]-'0';
			int t=t1*t2+kq[x+y]+du;
			kq[x+y]=t%10;
			du=t/10;
			y++;
//			cout << du << " ";
		}
		if (du>0) kq[x+y]=du;
		x++;
	}
    int n=lens+lent+1;
    while (n>=1 && kq[n]==0) n--;
    string res="";
	for (int i=n;i>=0;i--){
		char k=kq[i]+'0';
		res=res+k;
	}
	return res;
}
int main(){
	faster();
	long long n;
	cin >> n;
	ostringstream s;
	s << n;
	string pt1=s.str();
	
	long long p2=n+1;
	ostringstream s1;
	s1 << p2;
	string pt2=s1.str();
	
	long long p3=2*n+1;
	ostringstream s2;
	s2 << p3;
	string pt3=s2.str();
	
	string res="";
	res=tich(pt1, pt2);
//	cout << res << "\n";
	res=tich(res, pt3);
//	cout << res << "\n";
	int t=0;
	
	string kq="";
	for (int i=0;i<res.size();i++){
		int k=res[i]-'0';
		t=t*10+k;
		char k1=(t/6)+'0';
		kq+=k1;
		t=t%6;
	}
	while (kq.size()>1 && kq[0]=='0') kq.erase(kq.begin());
	cout << kq;
} 