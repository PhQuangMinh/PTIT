#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long sumuoc(long long n){
	long long res=0;
	for (long i=1;i*i<=n;i++){
		if (n%i==0){
			if (i*i==n) res+=i;
			else res+=i+n/i;
		}
	}
	return res;
}
void solve(){
	long long n;
	cin >> n;
	if (2*n==sumuoc(sumuoc(n))) cout << "YES";
	else cout << "NO";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 