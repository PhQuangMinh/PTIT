#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(long long a, long long b){
	if (a>=b) return 1;
	return 0;
}
int main(){
	faster();
	long long n, k;
	cin >> n >> k;
	long long a[n+5];
	for (long long i=1;i<=n;i++) cin >> a[i];
	sort(a+2, a+n+1, cmp);
	long long sum=a[1];
	for (long long i=2;i<=k+1;i++) sum+=a[i];
	for (long long i=k+2;i<=n;i++) sum-=a[i];
	cout << sum;
} 