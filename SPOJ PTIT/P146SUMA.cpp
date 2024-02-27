#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	int d1=0;
	for (int i=1;i<=n;i++){
	    cin >> a[i];
	    if (a[i]==1) d1++;
	}
	int res=-mod;
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			int sum=d1;
			for (int k=i;k<=j;k++){
				if (a[k]==1) sum--;
				else sum++;
			}
			res=max(res, sum);
		}
	}
	cout << res;
} 