#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long ucln(long long a, long long b){
	long long tich=a*b;
	long long t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	a=tich/a;
	return a;
}
void solve(){
	long long x, y, z, n;
	cin >> x >> y >> z >> n;
	long long uc=ucln(x, y);
	uc=ucln(uc, z);
	long long k=1;
	for (int i=1;i<=n-1;i++) k*=10;
	long long t=k*10-1;
	long long thuong=t/uc;
    if (thuong==0) cout << "-1\n";
    else{
        k=(k+uc-1)/uc;
        k*=uc;
        cout << k << "\n";
	}
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 