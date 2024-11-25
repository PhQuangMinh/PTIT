#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int v[n+5], w[n+5];
	for (int i=1;i<=n;i++) cin >> w[i] >> v[i];
	int a[105]={0};
	int tmp=0;
	for (int i=1;i<=n;i++)
	    for (int j=m;j>=w[i];j--){
	    	a[j]=max(a[j], a[j-w[i]]+v[i]);
		}
	cout << a[m];
}