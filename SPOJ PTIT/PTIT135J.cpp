#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	double n, lai, kq;
	cin >> n >> lai >> kq;
	lai=lai/100;
	int dem=0;
	while (n<=kq){
		n=n*(1+lai);
		dem++;
	}
	cout << dem << "\n";
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 