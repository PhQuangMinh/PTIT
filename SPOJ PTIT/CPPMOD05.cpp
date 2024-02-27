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
void solve(){
	string n;
	cin >> n;
	long long m;
	cin >> m;
	cout << chia(n, m) << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 