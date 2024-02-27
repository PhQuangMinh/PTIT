#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct nha{
	int x, h;
};
bool cmp(nha a, nha b){
	if (a.x<b.x) return 1;
	return 0;
}
int main(){
	faster();
	int n, d;
	cin >> n >> d;
	nha a[n+5];
	for (int i=1;i<=n;i++) 
	    cin >> a[i].x >> a[i].h;
	sort(a+1, a+n+1, cmp);
	int res=0;
	for (int i=2;i<=n;i++){
		int ok=0;
		for (int j=i-1;j>=1;j--)
		    if (a[j].h>=2*a[i].h && a[j].x>=a[i].x-d){
		    	ok=1;
		    	break;
			}
		if (ok){
			ok=0;
			for (int j=i+1;j<=n;j++)
		    if (a[j].h>=2*a[i].h && a[j].x<=a[i].x+d){
		    	ok=1;
		    	break;
			}
		}
		if (ok) res++;
	}
	cout << res;
} 