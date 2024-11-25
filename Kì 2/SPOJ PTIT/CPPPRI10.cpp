#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int tcs(int x){
	int sum=0;
	while (x!=0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
void solve(){
	int n;
	cin >> n;
	if (snt(n)){
		cout << "NO\n";
		return;
	}
	int sumn=tcs(n);
	int sum=0;
	for (int i=2;i<=sqrt(n);i++)
	    if (n%i==0){
	    	while (n%i==0){
	    		sum+=tcs(i);
	    		n/=i;
			}
		}
	if (n>1) sum+=tcs(n);
	if (sumn==sum) cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 