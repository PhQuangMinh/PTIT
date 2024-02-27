#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int a[n+5];
	int ma=0;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		ma=max(a[i], ma);
	}
	int left=0, right=ma;
	while (left<right){
		int t=(left+right+1)/2;
		long long sum=0;
		for (int i=1;i<=n;i++)
		    if (a[i]>t) sum+=a[i]-t;
		if (sum>=m) left=t;
		else right=t-1;
	}
	cout << left;
} 