#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
void solve(){
	int n, k;
	cin >> n >> k;
	int a[n+5];
	int ok=0;
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1, cmp);
	int res=0;
	for (int i=n;i>=1;i--){
		res+=k/a[i];
		k%=a[i];
	}
	if (k!=0) cout << "-1";
	else cout << res;
}
int main(){
	faster();
	solve();
}