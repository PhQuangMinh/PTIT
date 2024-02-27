#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	long long x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	long long t=min(x1, x2);
	long long tmin=min(t, x3);
	t=max(x1, x2);
	long long tmax=max(t, x3);
//	cout << tmax << " " << tmin << " ";
	cout << tmax-tmin << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 