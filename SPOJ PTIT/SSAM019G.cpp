#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
long long f[100];
void fibo(){
	f[0]=0;
	f[1]=1;
	f[2]=1;
	for (int i=3;i<=92;i++) 
	    f[i]=f[i-1]+f[i-2];
}
void kq(int n, long long k){
	if (n==1) cout << "A\n";
	else 
	    if (n==2) cout << "B\n";
	    else{
	    	if (k<=f[n-2]) kq(n-2, k);
	    	else kq(n-1, k-f[n-2]);
		}
}
void solve(){
	int n;
	long long k;
	cin >> n >> k;
	kq(n, k);
}
int main(){
	faster();
	fibo();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 