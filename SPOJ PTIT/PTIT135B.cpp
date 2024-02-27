#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, len;
	cin >> n >> len;
	int res=0;
	int d;
	int dis1=0;
	for (int i=1;i<=n;i++){
		int dis, gre, red;
		cin >> dis >> red >> gre;
//		cout << res << "\n";
		res+=(dis-dis1);
		int t=res%(gre+red);
		if (t<=red) res=res+red-t;
//		cout << res << " " << t << "\n";
		d=dis;
		dis1=dis;
	}
	res+=(len-d);
	cout << res;
}