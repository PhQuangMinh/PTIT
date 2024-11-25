#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	int a[105]={0};
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		a[x]++;
	}
	int res=0, d2=0;
	for (int i=1;i<=100;i++){
		while (a[i]>=4){
			res++;
			a[i]-=4;
		}
		if (a[i]>=2) d2++;
	}
	res+=d2/2;
	cout << res;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 