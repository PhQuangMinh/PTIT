#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct diem{
	int d1, d2;
};
int main(){
	faster();
	int n;
	cin >> n;
	diem a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i].d1 >> a[i].d2;
	int ans=0, dans=0;
	for (int i=1;i<=5;i++){
		int d=0;
	    for (int j=1;j<=n;j++){
	    	if (a[j].d1==i || a[j].d2==i) d++;
	    	else{
	    		if (d>dans){
	    			dans=d;
	    			ans=i;
				}
				d=0;
			}
		}
	}
	cout << dans << " " << ans;
}