#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	n*=2;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int dem=0, vt;
	for (int i=1;i<n;i+=2)
	    if (a[i]!=a[i+1]){
	    	for (int j=i+1;j<=n;j++)
	    	    if (a[i]==a[j]){
	    	    	vt=j;break;
				}
			for (int j=vt;j>=i+2;j--) a[j]=a[j-1];
			a[i+1]=a[i];
			dem+=vt-i-1;
//			for (int i=1;i<=n;i++) cout << a[i] << " ";
//			cout << dem << "\n";
		}
	cout << dem;
}