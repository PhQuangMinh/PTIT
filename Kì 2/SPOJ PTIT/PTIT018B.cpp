#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
void solve(){
	int n;
	cin >> n;
	int a[n+5], b[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int j=1;j<=n;j++) cin >> b[j];
	sort(a+1, a+n+1, cmp);
	sort(b+1, b+n+1, cmp);
	for (int i=1;i<=n;i++)
	    if (a[i]>b[i]){
	    	cout << "NO\n";
	    	return;
		}
	cout << "YES\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 