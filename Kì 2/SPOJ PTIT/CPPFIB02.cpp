#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long f[100];
void fibo(){
	f[0]=0;
	f[1]=1;
	for (int i=2;i<=92;i++)
	    f[i]=f[i-1]+f[i-2];
}
void solve(){
	long long n;
	cin >> n;
	for (int i=0;i<=92;i++)
	    if (f[i]==n){
	    	cout << "YES\n";
	    	return;
		}
	cout << "NO\n";
}
int main(){
	faster();
	fibo();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 