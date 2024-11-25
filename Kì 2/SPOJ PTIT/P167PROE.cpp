#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
//pt: y=(n*x)/(x-n);
void solve(){
	int n;
	cin >> n;
	int res=0;
	for (int i=n+1;i<2*n;i++){
		long long k=(long long)i*n;
		int t=i-n;
		if (k%t==0) res+=2;
	}
	res++;
	cout << res << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 