#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int res=0;
	int dem;
	for (int i=1;i<=n;i++){
		int d=0;
		dem=0;
		int t;
		for (int j=i;j<=n;j++)
		    if (a[i]==a[j]) dem++;
		    else{
		    	if (d==0) t=a[j];
		    	d++;
		    	if (d>=2 && a[j]!=t){
		    		res=max(res, dem);
//		    		cout << a[i] << " " << dem << "\n";
		    		break;
				}
			}
		res=max(res, dem);
	}
//	res=max(res, dem);
	cout << res << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 