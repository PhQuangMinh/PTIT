#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct dt{
	long long l, r, vt;
};
bool cmp(dt a, dt b){
	if (a.r<b.r || a.r==b.r && a.l>b.l) return 1;
	return 0;
}
int main(){
	faster();
	int n;
	cin >> n;
	dt a[1000];
	long long mi=mod;
	for (int i=1;i<=n;i++){
	    cin >> a[i].l >> a[i].r;
	    a[i].vt=i;
	    mi=min(mi, a[i].l);
	}
	sort(a+1, a+n+1, cmp);
//	for (int i=1;i<=n;i++)
//	     cout << a[i].l << " " << a[i].r << "\n";
	if (a[n].l<=mi) cout << a[n].vt;
	else cout << -1;
}