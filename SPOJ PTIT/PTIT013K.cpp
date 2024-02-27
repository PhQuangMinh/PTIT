#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int gt(int x){
	int tich=1;
	for (int i=1;i<=x;i++) tich*=i;
	return tich;
}
void solve(){
	int n;
	cin >> n;
	int d=0;
	int kq=0;
	while (n!=0){
		d++;
		kq=kq+(n%10)*gt(d);
		n/=10;
	}
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 