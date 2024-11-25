#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int nt[10000030];
int snt[10000030];
long long sumsnt=0;
void sang(){
	nt[0]=1;
	nt[1]=1;
	for (int i=2;i<=sqrt(10000030);i++){
		if (nt[i]==0)
		    for (int j=i*i;j<=10000030;j+=i)
		        nt[j]=1;
	}
}
int dem=0;
void lietkent(){
	for (int i=2;i<=10000030;i++)
	    if (nt[i]==0) snt[++dem]=i;
		
}
void pt(int n){
	int d=0;
	int i=snt[++d];
	while (i*i<=n){
		if (n%i==0){
			while (n%i==0){
				sumsnt+=i;
				n/=i;
			}
		}
		i=snt[++d];
	}
	if (n>1) sumsnt+=n;
}
void solve(){
	int n;
	cin >> n;
	pt(n);
}
int main(){
	faster();
	sang();
	lietkent();
	int t;
	cin >> t;
	while (t--) solve();
	cout << sumsnt;
} 