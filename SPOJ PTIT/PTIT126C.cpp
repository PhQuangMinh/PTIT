#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n, s;
	cin >> n >> s;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int ans=n+1;
	long long sum=0;
	int i=0, j=0;
	while (j<=n){
		if (sum<s){
			j++;
			sum+=a[j];
		}
		else{
			ans=min(ans, j-i);
			i++;
			sum-=a[i];
		}
//		cout << sum << " ";
	}
	if (ans==n+1) cout << 0;
	else cout << ans;
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}