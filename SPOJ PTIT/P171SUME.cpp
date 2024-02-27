#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void lt(int n, long long a[]){
	long long sum=0;
	long long tong=0;
	long long ma=-mod;
	for (int i=1;i<=n;i++){
		tong+=a[i];
		tong=max(tong, a[i]);
		sum=max(tong, sum);
		if (a[i]<=0){
			ma=max(ma, a[i]);
		}
	}
	if (sum>0) cout << sum << " ";
	else cout << ma << " ";
}
void klt(int n, long long a[]){
	long long ma=-mod;
	long long sum=0;
	for (int i=1;i<=n;i++){
		if (a[i]>0) sum+=a[i];
	    else
		    ma=max(ma, a[i]);
	}
	if (sum>0) cout << sum;
	else cout << ma;
}
int main(){
	faster();
	int n;
	cin >> n;
	long long a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	lt(n, a);
	klt(n, a);
}