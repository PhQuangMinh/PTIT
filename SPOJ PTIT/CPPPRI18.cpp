#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int bcnn(int a, int b){
	int tich=a*b;
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return tich/a;
}
int dem(int n, int m, int x){
	int dau=(n+x-1)/x;
	int cuoi=m/x;
	if (dau>cuoi) return 0;
	return cuoi-dau+1;
}
void solve(){
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int bc=bcnn(a, b);
//	cout << dem(n, m, a) << " " << dem(n, m, b) << " " << dem(n, m, bc);
	int kq=dem(n, m, a) + dem(n, m, b) - dem(n, m, bc);
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 