#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	int dc=0, dl=0;
	long long sum=0;
	int le=mod;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (a[i]%2==0) dc++;
		else{
			dl++;
			le=min(le, a[i]);
		}
		sum+=a[i];
	}
	if (dl==0){
		cout << 0;
		return 0;
	}
	if (dl%2==0){
		cout << sum-le;
	}
	else cout << sum;
}