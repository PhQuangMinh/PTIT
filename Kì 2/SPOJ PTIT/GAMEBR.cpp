#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	if (n==m){
		cout << n-1 << " " << m;
		return 0;
	}
	int mi=min(n, m);
	int ma=max(n, m);
	cout << ma-1 << " " << mi;
}