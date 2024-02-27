#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n;
	long long k;
	cin >> n >> k;
	int kq;
	if (n==0) kq=0;
	else
	    if (n<k)
	        kq=n*(n+1)/2;
	    else{
	        int thuong=n/k;
	        int du=n%k;
	        kq=thuong*k*(k-1)/2;
	        kq+=du*(du+1)/2;
	    }
	if (kq==k) cout << 1 << "\n";
	else cout << 0 << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 