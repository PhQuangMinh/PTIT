#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	long long l, r;
	cin >> l >> r;
	int a[100005]={0};
	for (int i=2;i<=sqrt(r);i++){
		long long k;
	    if (i*i>((l+i-1)/i*i)) k=i*i;
	    else k=(l+i-1)/i*i;
		for (long long j=k;j<=r;j+=i)
		    a[j-l]=1;
	}
	long long k= (l<2) ? 2 : l;
	int dem=0;
	for (long long i=k;i<=r;i++)
	    if (a[i-l]==0) dem++;
	cout << dem;
	cout << "\n";
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
} 