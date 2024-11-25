#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int res, dem;
int luu[100000];
int check(){
	for (int i=2;i<=dem;i++)
	    if (luu[i-1]>=luu[i]) return 0;
	return 1;
}
void ql(int i, int k, int a[], int n){
	if (dem==k){
		res+=check();
		return;
	}
	for (int j=i+1;j<=n;j++){
		dem++;
		luu[dem]=a[j];
		ql(j, k, a, n);
		dem--;
	}
}
void solve(){
	int n, k;
	cin >> n >> k;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	ql(0, k, a, n);
	cout << res << "\n";
	res=0;dem=0;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 