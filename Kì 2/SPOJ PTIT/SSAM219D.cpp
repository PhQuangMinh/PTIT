#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(long long a, long long b){
	if (a<b) return 1;
	return 0;
}
int tknp(long long a[], int l, int r, long long k){
	while (l<=r){
		int t=(l+r)/2;
//		cout << a[t] << "a\n";
		if (a[t]==k) return 1;
		if (a[t]>k) r=t-1;
		else 
		    if (a[t]<k) l=t+1;
	}
	return 0;
}
void solve(){
	int n;
	cin >> n;
	long long a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1, cmp);
//	for (int i=1;i<=n;i++) cout << a[i] << " ";
	for (int i=1;i<=n-2;i++)
	    for (int j=i+1;j<=n-1;j++){
	    	long long sum=a[i]*a[i]+a[j]*a[j];
	    	long long k=sqrt(sum);
	    	if (k*k==sum){
	    		if (tknp(a, 1, n, k)==1){
	    			cout << "YES";
//	    			for (int l=1;l<=n;l++) cout << a[l] << " ";
//	    			cout << a[i] << " " << a[j] << " " << k << "\n";
	    			return;
				}
			}
		}
	cout << "NO";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 