#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void tich (string s, string t){
	int lens=s.size();
	int lent=t.size();
	int kq[2003]={0};
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
    int n=lens+lent;
    while (n>=1 && kq[n]==0) n--;
	for (int i=n;i>=0;i--) cout << kq[i];
	cout << "\n";
}
void solve(){
	string s, t;
	cin >> s >> t;
	tich(s, t);
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
