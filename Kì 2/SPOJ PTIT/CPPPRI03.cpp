#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int nt[10005]={};
void sang(){
	nt[0]=1;
	nt[1]=1;
	for (int i=2;i<=sqrt(10000);i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=10000;j+=i) nt[j]=1;
}
void solve(){
	int n;
	cin >> n;
	for (int i=2;i<=n;i++) 
	    if (nt[i]==0) cout << i << " ";
	cout << "\n";
}
int main(){
	faster();
	sang();
	int t;
	cin >> t;
	while (t--) solve();
} 