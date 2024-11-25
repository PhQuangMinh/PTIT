#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct so{
	int gt, sl, xh;
};
bool cmp(so a, so b){
	if (a.sl>b.sl || a.sl==b.sl && a.xh<b.xh) return 1;
	return 0;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	so a[n+5];
	int d=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		int ok=1;
		for (int j=1;j<=d;j++)
		    if (a[j].gt==x){
		    	a[j].sl++;
		    	ok=0;break;
			}
		if (ok){
			d++;
			a[d].gt=x;
			a[d].sl=1;
			a[d].xh=i;
		}
	}
	sort (a+1, a+d+1, cmp);
	for (int i=1;i<=d;i++){
		for (int j=1;j<=a[i].sl;j++)
		    cout << a[i].gt << " ";
	}
}
 