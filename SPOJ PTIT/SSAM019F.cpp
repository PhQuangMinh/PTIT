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
void solve(){
	int n;
	cin >> n;
	cout << f[n] << "\n";
}
int main(){
	faster();
	fibo();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 