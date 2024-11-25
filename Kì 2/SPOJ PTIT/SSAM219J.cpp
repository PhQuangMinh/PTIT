#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	long long k;
	cin >> n >> k;
	long long a[n+5];
	int ok=0;
	for (int i=1;i<=n;i++){
	    cin >> a[i];
	    if (a[i]==0) ok=1;
	}
	if (k==0){
		if (ok) cout << "YES\n";
		else cout << "NO\n";
		return;
	}
	int l=0, r=0;
	long long sum=0;
	while (r<=n){
	    if (sum<k){
	    	r++;
	    	sum+=a[r];
		}
		else
		    if (sum>k){
		    	l++;
			    sum-=a[l];
			}
		    else{
		    	cout << "YES\n";
		    	return;
			}
	}
	cout << "NO\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 