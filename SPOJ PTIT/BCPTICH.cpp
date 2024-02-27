#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int test, n;
	cin >> test >> n;
	n*=2;
	int dem=0;
	for (int i=1;i*i<=n;i++)
	    if (n%i==0){
	    	int t1=i;
	    	int t2=n/i;
	    	int r=(t1+t2-1)/2;
	    	int l=t2-r;
	    	if ((l+r)*(r-l+1)==n) dem++;
		}
	cout << test << " " << dem-1 << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 