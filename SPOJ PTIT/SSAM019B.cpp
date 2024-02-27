#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
struct so{
	int id, gt;
};
bool cmp(so a, so b){
	if (a.gt<b.gt || a.gt==b.gt && a.id<b.id) return true;
	return false;
}
void solve(){
	int n;
	cin >> n;
	so a[n+5];
	for (int i=1;i<=n;i++){
		cin >> a[i].gt;
		a[i].id=i;
	}
	sort(a+1, a+n+1, cmp);
	int min=1000000007;
	int imin=1000000007;
	for (int i=1;i<n;i++)
	    if (a[i].gt==a[i+1].gt && a[i].id<imin){
	    	imin=a[i].id;
	    	min=a[i].gt;
		}
	if (imin==1000000007) cout << "NO\n";
	else cout << min << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 