#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int nt[1000005];
void sang(){
	for (int i=2;i*i<=1000000;i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=1000000;j+=i)
	            nt[j]=1;
}
int dem[1000005];
void demnt(){
	for (int i=0;i<=1000000;i++){
	    if (i<6) dem[i]=0;
	    else 
		    if (nt[i]==0 && nt[i-6]==0) 
		        dem[i]=dem[i-1]+1;
		    else dem[i]=dem[i-1];
	}
}
void solve(){
	int n, m;
	cin >> n >> m;
	if (m-n<6) cout << "0\n";
	else
	    cout << dem[m]-dem[n+5] << "\n";
}
int main(){
	faster();
	sang();
	demnt();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 