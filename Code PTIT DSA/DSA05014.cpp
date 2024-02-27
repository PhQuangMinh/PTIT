#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
string f[105];
string sum(string s, string t){
    int n = s.size();
    int m = t.size();
    int du = 0;
    int i = n-1, j = m-1;
    string ans = "";
    while (i>=0 || j>=0){
        int t1, t2;
        if (i>=0) t1 = s[i]-'0';
        else t1 = 0;
        if (j>=0) t2 = t[j]-'0';
        else t2 = 0;
        int t = t1+t2+du;
        char c = t%10 + '0';
        ans = c+ans;
        du = t/10;
        i--;j--;
    }
    if (du == 1) ans = '1' + ans;
    return ans;
}
string nhan(string s, string t){
    int n = s.size();
    int m = t.size();
    int kq[20005]={0};
	int x=0, y;
	for (int i=n-1;i>=0;i--){
		int du=0;
		int s1=s[i]-'0';
		y=0;
		for (int j=m-1;j>=0;j--){
			int t1=t[j]-'0';
			int tong = t1*s1 + du + kq[x+y];
			kq[x+y]=tong%10;
			du=tong/10;
			y++;
		}
		if (du>0) kq[x+y]=du;
		x++;
	}
	int k=n+m-1;
	while(k>=1 && kq[k]==0) k--;
    string ans = "";
	for(int i=k;i>=0;i--){
        ans += (kq[i]+'0');
    }
    return ans;
}
void catalan(){
    f[1] = "1";
    f[2] = "1";
    f[3] = "2";
    for (int i = 4;i<=100;i++){
        for (int j=1;j<i;j++){
            f[i] = sum(f[i], nhan(f[j], f[i-j]));
        }
    }
}
void solve(){
    int n;
    cin >> n;
    cout << f[n+1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    catalan();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}