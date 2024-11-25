#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int x, y, p;
	cin >> x >> y >> p;
	x=x%p;
	long long kq=x;
	for (int i=1;i<=y-1;i++){
		kq=((long long)kq*x)%p;
	}
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 