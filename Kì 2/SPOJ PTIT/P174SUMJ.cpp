#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[1005]={0};
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	int ok=1;
	int res=0;
	while (ok){
		int dem=-1;
		ok=0;
		for (int i=1;i<=1000;i++){
			if (a[i]>0){
				a[i]--;
				dem++;
				ok=1;
//				cout << i << "\n";
			}
		}
		if (dem>0) res+=dem;
	}
	cout << res;
} 