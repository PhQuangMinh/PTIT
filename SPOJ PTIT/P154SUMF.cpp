#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int res=0;
	for (int i=1;i<=n;i++){
		int p, q;
		cin >> p >> q;
		if (q-p>=2) res++;
	}
	cout << res;
} 