#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	int mi=mod, sum=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		sum+=x;
		if (x%2==1) mi=min(mi, x);
	}
	if (sum%2==0) sum-=mi;
	cout << sum;
} 