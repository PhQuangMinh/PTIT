#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n, k;
	cin >> n >> k;
	long long a[n+5];
	long long f[n+5];
	f[0]=0;
	for (int i=1;i<=n;i++){
	    cin >> a[i];
	    f[i]=f[i-1]+a[i];
	}
	int res=0;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=i;j++){
	    	long long sum=f[i]-f[j-1];
	    	if (sum/(i-j+1)>=k && i-j+1>res)
	    	    res=i-j+1;
		}
    cout << res;
} 