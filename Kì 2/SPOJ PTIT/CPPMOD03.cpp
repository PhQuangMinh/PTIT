#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n;
	long long k;
	cin >> n >> k;
	if (n==0){
		cout << 0 << "\n";
		return;
	}
	if (n<k){
	    cout << n*(n+1)/2 << "\n";
	    return;
	}
	int thuong=n/k;
	int du=n%k;
	int kq=thuong*k*(k-1)/2;
	kq+=du*(du+1)/2;
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 