#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int ans=1;
	for (int i=2;i*i<=n;i++)
	    if (n%i==0){
	    	int d=0;
	    	while (n%i==0){
	    		d++;
	    		n/=i;
			}
			ans*=(2*d+1);
		}
	if (n>1) ans*=3;
	cout << ans;
}