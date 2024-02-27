#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int a, b, c;
	cin >> a >> b >> c;
	int d[150]={0};
	int dau=101, cuoi=0;
	for (int i=1;i<=3;i++){
		int x, y;
		cin >> x >> y;
		for (int j=x;j<y;j++) d[j]++;
		dau=min(dau, x);
		cuoi=max(cuoi, y-1);
	}
	int ans=0;
	for (int i=dau;i<=cuoi;i++)
	    if (d[i]==1) ans+=a;
	    else 
	        if (d[i]==2) ans+=2*b;
	        else 
			    if (d[i]==3) ans+=3*c;
//	cout << dau << " " << cuoi;
	cout << ans;
}