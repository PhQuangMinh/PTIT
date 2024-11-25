#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n, k;
	cin >> n >> k;
	int a[200005];
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1);
	a[n+1]=-1;
	if (k==0 && a[1]>1){
		cout << 1;
		return 0;
	}
	for (int i=1;i<=n;i++){
		int t=a[i];
		while (t==a[i]) i++;
		i--;
		if (i==k){
			cout << a[i];
			return 0;
		}
		if (i>k){
			cout << "-1";
			return 0;
		}
	