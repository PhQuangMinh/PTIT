#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int mi=mod, ma=-mod;
	int a[n+5];
	for (int i=1;i<=n;i++){
	    cin >> a[i];
	    mi=min(mi, a[i]);
	    ma=max(ma, a[i]);
	}
	if (mi==ma){
		cout << 0;
		return 0;
	}
	int res;
	for (int i=1;i<=n;i++)
	    if (a[i]==ma){
	    	res=i-1;
	    	for (int j=i;j>=2;j--)
	    	    a[j]=a[j-1];;
	    	a[1]=ma;
	    	break;
	    }
//	for (int i=1;i<=n;i++) cout << a[i] << " ";
//	cout << res << " ";
	for (int i=n;i>=1;i--)
	    if (a[i]==mi){
	    	res+=n-i;
	    	break;
		}
	cout << res;
} 