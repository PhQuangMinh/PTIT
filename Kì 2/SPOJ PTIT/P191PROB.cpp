#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n, m; 
    cin >> n >> m;
 //   int a[n+5];
    int d[2000]={0};
    for (int i=1;i<=n;i++){
    	int x;
    	cin >> x;
    	d[x]++;
	}
	int dem=0;
	for (int i=1;i<=m/2;i++)
	    if (2*i==m) dem+=(d[i]-1)*d[i]/2;
	    else dem+=d[i]*d[m-i];
	cout << dem;
}