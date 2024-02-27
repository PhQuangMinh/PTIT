#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
//	if (n==2){
//		if (a[1]>a[2]) cout << 1;
//		else cout << 0;
//		return 0;
//	}
	int vt=-1;
	for (int i=1;i<n;i++)
	    if (a[i]>a[i+1]){
	    	vt=i+1;
	    	break;
		}
	if (vt==-1){
		cout << 0;
		return 0;
	}
	for (int i=vt;i<n;i++)
	    if (a[i]>a[i+1]){
	    	cout << -1;
	    	return 0;
		}
	if (a[1]>=a[n]) cout << n-vt+1;
} 