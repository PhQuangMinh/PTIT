#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int xa, ya, xb, yb, xc, yc, xd, yd;
	cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
	int ok=0;
	if (xa<=xd && xc<=xb && yb>=yc && yb<yd) ok=1;
	if (xc<=xb && yd>=ya && yb>=yd && xd>=xa) ok=1;
	cout << ok << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
