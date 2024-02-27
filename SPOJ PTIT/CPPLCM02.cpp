#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int d[10000];
void dem(int n){
	for (int i=2;i<=n;i++){
		if (n%i==0){
			int dem=0;
			while (n%i==0){
				dem++;
				n/=i;
			}
			if (dem>d[i]) d[i]=dem;
		}
	}
	if (n>1 && d[n]==0) d[n]=1;
}
void solve(){
	faster();
	int n;
	cin >> n;
	for (int i=2;i<=n;i++) dem(i);
	long long t=1;
	for (int i=2;i<=n;i++){
	    t*=pow(i, d[i]);
	    d[i]=0;
	}
	cout << t << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}