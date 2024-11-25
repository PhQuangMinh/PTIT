#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int scp(int n){
	int t=sqrt(n);
	if (t*t==n) return 1;
	return 0;
}
void solve(){
	long long n;
	cin >> n;
	int res=0;
//	if (n<=1){
//		cout << 1 << "\n";
//		return;
//	}
    if (n<0){
    	cout << 0;
    	return;
	}
	int check[100000]={0};
	int can=sqrt(n);
	for (int i=0;i<=can;i++){
		long long k=n-i*i;
//		int can1=sqrt(k)
		if (check[i]==0)
		    if (scp(k)){
		    	check[i]=1;
		    	int t=sqrt(k);
		    	check[t]=1;
		    }
	}
	for (int i=0;i<=89999;i++)
	    if (check[i]==1){
//	    	cout << i << " ";
	    	res++;
	    }
	if (res%2==1) res=res/2+1;
	else res=res/2;
	cout << res ;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) cout << "\n";
	}
} 