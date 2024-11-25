#include<bits/stdc++.h>
using namespace std;
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
void solve(){
	int n;
	cin >> n;
	int a[1005];
	for (int i=1;i<=n;i++) 
	   cin >> a[i];
	int b[1005];
	b[0]=a[1];
	for (int i=1;i<n;i++)
	    b[i]=bcnn(a[i], a[i+1]);
	b[n]=a[n];
	for (int i=0;i<=n;i++)
	    cout << b[i] << " ";
	cout << "\n";
}
int main(){
	int t;
	cin >> t;
	while (t--) solve();
} 