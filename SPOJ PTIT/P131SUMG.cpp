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
	long long sum=0;
	for (int i=1;i<n;i++){
		int mi=a[i], ma=a[i];
		for (int j=i+1;j<=n;j++){
			mi=min(mi, a[j]);
			ma=max(ma, a[j]);
			sum+=(ma-mi);
//			cout << sum << " " << mi << " " << ma << "\n";
		}
	}
	cout << sum;
} 