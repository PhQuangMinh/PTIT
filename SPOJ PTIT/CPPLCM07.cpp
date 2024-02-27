#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
long long bcnn(int a, int b){
	long long tich=(long long)a*b;
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return tich/a;;
}
void solve(){
	int x, y, z, n;
	cin >> x >> y >> z >> n;
	long long bc=bcnn(x, y);
	bc=bcnn(bc, z);
	long long bcmin=pow(10, n-1);
	long long t=pow(10, n);
	if (t<=bc){
		cout << "-1" << "\n";
		return;
    }
    long long kq=bcmin/bc;
    if ((long long)bc*kq==bcmin) cout << bcmin << "\n";
    else cout << (kq+1)*bc << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 