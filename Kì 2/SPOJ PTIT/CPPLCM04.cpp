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
long long ucln(long long a, long long b){
	long long t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
void solve(){
	long long a;
	string b;
	cin >> a >> b;
	long long du=chia(b, a);
	if (du==0) cout << a;
	else cout << ucln(du, a);
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}