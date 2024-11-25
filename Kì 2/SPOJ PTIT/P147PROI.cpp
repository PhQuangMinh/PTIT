#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int a[n+5];
	n++;
	m++;
	for (int i=1;i<=n;i++) cin >> a[i];
	int b[m+5];
	for (int i=1;i<=m;i++) cin >> b[i];
	if (n>m){
		if (a[1]*b[1]<0) cout << "-Infinity";
		else cout << "Infinity";
		return 0;
	}
	if (n<m){
		cout << "0/1";
		return 0;
	}
    int uc=ucln(a[1], b[1]);
    int tu, mau;
    if (a[1]*b[1]>0){
    	tu=a[1]/uc;
    	mau=b[1]/uc;
	}
	else{
		tu=-abs(a[1]/uc);
		mau=abs(b[1]/uc);
	}
	cout << tu << "/" << mau;
}