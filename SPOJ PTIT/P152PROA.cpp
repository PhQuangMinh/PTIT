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
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
void solve(){
	int n;
	cin >> n;
	int dem=0;
	for (int i=1;i<n;i++)
	    if (ucln(n, i)==1) dem++;
	if (snt(dem)) cout << "1\n";
	else cout << "0\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 