#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int xa, ya, xb, yb;
	cin >> xa >> ya >> xb >> yb;
	if (ya<0 && yb<0 || ya>0 && yb>0) ya=-ya; 
	long long kq=sqrt((long long)(xa-xb)*(xa-xb)+(long long)(ya-yb)*(ya-yb));
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}