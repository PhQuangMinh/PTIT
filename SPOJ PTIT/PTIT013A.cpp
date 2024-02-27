#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int check(long long n){
	int t=n%10;
	if (t!=6) return 0;
	n/=10;
	t=n%10;
	if (t!=8) return 0;
	return 1;
}
void solve(){
	long long n;
	cin >> n;
	cout << check(n) << "\n";
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 