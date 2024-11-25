#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int l3(int x){
	int t=x;
	int k=0;
	while (t!=0){
		k=k*10+t%10;
		t/=10;
	}
	if (k==x) return 1;
	return 0;
}
int l2(int x){
	if (l3(x)==0) return 0;
	int sum=0;
	while (x!=0){
		sum+=x%10;
		x/=10;
	}
	if (sum%10==0) return 1;
	return 0;
}
int l1(int x){
	if (l2(x)==0) return 0;
	while (x!=0){
		if (x%10==0) return 0;
		x/=10;
	}
	return 1;
}
int dem1, dem2, dem3;
void demloai(){
	for (int i=100000;i<=999999;i++){
	    if (l1(i)) dem1++;
	    if (l2(i)) dem2++;
	    if (l3(i)) dem3++;
	}
}
void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	if (dem1>=a && dem2-a>=b && dem3-a-b>=c) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	faster();
	int n;
	demloai();
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 