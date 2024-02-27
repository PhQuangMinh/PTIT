#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long chia(string s, long long c){
    long long t=0;
	int n=s.size();
	for (int i=0;i<n;i++){
		t=t*10+(s[i]-'0');
		t=t%c;
	}
	return t;
}
long long du(long long a, long long b, long long c){
	if (c==0) return 1;
	if (c%2==0){
		long long t=c/2;
		long long p=du(a, b, t);
		return (p*p)%b;
	}
	else return (du(a, b, c-1)*a)%b;
}
void solve(){
	string a;
	long long b, m;
	cin >> a >> b >> m;
	long long t=chia(a, m);
//	cout << t << " ";
	cout << du(t, m, b) << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 