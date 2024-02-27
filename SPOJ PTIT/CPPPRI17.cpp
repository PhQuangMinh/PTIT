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
int dem[1000005];
void demnt(){
	dem[0]=0;
	for (int i=1;i<=1000000;i++)
	    if (nt[i]==0) dem[i]=dem[i-1]+1;
	    else dem[i]=dem[i-1];
}
void solve(){
	long long n, m;
	cin >> m >> n;
	n=sqrt(n);
	if ((long long)sqrt(m)*sqrt(m)<m) m=sqrt(m)+1;
	else m=sqrt(m);
	cout << dem[n]-dem[m-1];
	cout << "\n";
}
int main(){
	faster();
	sang();
	demnt();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 