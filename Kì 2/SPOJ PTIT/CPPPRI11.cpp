#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
long long h[100];
int dem=0;
void shh(){
	for (int i=1;i<=32;i++)
	    if (snt(i)){
	    	int tmp=pow(2, i)-1;
	    	if (snt(tmp))
	    	    h[++dem]=(long long)tmp*pow(2, i-1);
		}
}
void solve(){
	long long n;
	cin >> n;
	for (int i=1;i<=dem;i++)
	    if (h[i]==n){
	    	cout << 1 << "\n";
	    	return;
		}
	cout << 0 << "\n";
}
int main(){
	faster();
	shh();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 