#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long f[100];
void tinh(){
	f[1]=1;
	f[2]=3;
	f[3]=7;
    for (int i=4;i<=50;i++)
        f[i]=f[i-1]*2+1;
}
int res(int n, long long k){
	if (k==1 || k==3) return 1;
	if (k==2) return 2;
	if (k<=f[n-1]) return res(n-1, k);
	else 
	    if (k==f[n-1]+1) return n;
	    else return res(n-1, k-f[n-1]-1);
}
void solve(){
	int n;
	long long k;
	cin >> n >> k;
	cout << res(n, k) << "\n";
}
int main(){
	faster();
	tinh();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 