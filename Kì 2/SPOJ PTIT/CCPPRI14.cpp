#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int nt[1000005];
void sang(){
	nt[1]=1;
	for (int i=2;i*i<=1000000;i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=1000000;j+=i)
	            nt[j]=1;
}
void solve(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		int k=sqrt(i);
		if (k*k==i && nt[k]==0) cout << i << " ";
	}
	cout << "\n";
}
int main(){
	faster();
	sang();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 