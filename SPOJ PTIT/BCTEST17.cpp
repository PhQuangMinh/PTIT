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
	int ans=0;
	for (int i=1;i<=n;i++){
		int max=a[i-1];
		for (int j=i-1;j>=1;j--){
		    if (a[j]>=max){
		    	ans++;
		    	max=a[j];
			}
			if (max>a[i]) break;
		}
//		max=a[i+1];
//		for (int j=i+1;j<=n;j++){
//		    if (a[j]>=max){
//		    	ans++;
//		    	max=a[j];
//		    }
//		    if (max>a[i]) break;
//		}
	}
	cout << ans;
}