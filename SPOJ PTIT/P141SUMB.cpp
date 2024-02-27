#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[5005]={0};
	int ans=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	for (int i=1;i<=n;i++) 
	    if (a[i]==0) ans++;
	cout << ans;
}