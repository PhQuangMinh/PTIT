#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int dem1=0, demt1=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		if (x==1) dem1++;
	}
	demt1=n-dem1;
	for (int i=1;i<=m;i++){
		int l, r;
		cin >> l >> r;
		int sl=r-l+1;
		if (sl%2==1) cout << "0";
		else{
			if (dem1>=sl/2 && demt1>=sl/2) cout << "1";
			else cout << "0";
		}
		if (i!=m) cout << "\n";
	}
} 