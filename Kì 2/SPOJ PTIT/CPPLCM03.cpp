#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int mod=1000000007;
void solve(){
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int uc=a[1];
	long long tich=1;
	for (int i=1;i<=n;i++){
		tich=((tich%mod)*(a[i]%mod))%mod;
		uc=ucln(uc, a[i]);
	}
	long long kq=1;
	for (int i=1;i<=uc;i++)
	    kq=((kq%mod)*(tich%mod))%mod;
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 