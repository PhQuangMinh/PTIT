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
	int res=0;
	int ma=0;
	for (int i=1;i<=n;i++){
		if (a[i]==i && a[i]>=ma) res++;
		ma=max(ma, a[i]);
	}
	cout << res;
} 