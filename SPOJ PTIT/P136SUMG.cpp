#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, c;
	cin >> n >> c;
	int a[n+5];
	for (int i=1;i<=n;i++)
	    cin >> a[i];
	int m;
	cin >> m;
	for (int i=1;i<=m;i++){
		int x, y;
		cin >> x >> y;
		int d[10005]={0};
		int ok=0;
		int max;
		for (int j=x;j<=y;j++){
		    d[a[j]]++;
		    if (d[a[j]]>(y-x+1)/2){
		    	ok=1;
		    	max=a[j];
		    }
		}
		if (ok) cout << "yes " << max << "\n";
		else cout << "no\n";
	}
} 