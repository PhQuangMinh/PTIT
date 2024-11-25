#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int kq(int n){
	if (n==0) return 0;
	if (n==1) return 1;
	if (n==2) return 4;
	if (n==3) return 5;
	if (n%2==0) return n*(n/2);
	return (n/2+1)*(n/2+1)+(n/2)*(n/2);
}
void solve(){
	int n;
	cin >> n;
	cout << kq(n) << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 