#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int nt[1000005];
void sang(){
	for (int i=2;i*i<=1000000;i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=1000000;j+=i)
	            nt[j]=1;
}
void solve(){
	long long n;
	cin >> n;
	int k=sqrt(n);
	int dem=0;
	for (int i=2;i<=k;i++)
	    if (nt[i]==0) dem++;
	cout << dem << "\n";
}
int main(){
	faster();
	sang();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 