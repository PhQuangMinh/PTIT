#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n, x, y;
	cin >> n >> x >> y;
	int a[200][200];
	int i, j;
	int d=0, h1=1, h2=n, c1=1, c2=n;
	while ((h1<=h2) && (c1<=c2)){
		for (i=c1;i<=c2;i++)
		   a[h1][i]=++d;
		h1++;
		for (i=h1;i<=h2;i++)
		   a[i][c2]=++d;
		c2--;
		for (i=c2;i>=c1;i--)
		   a[h2][i]=++d;
		h2--;
		for (i=h2;i>=h1;i--)
		   a[i][c1]=++d;
		c1++;
	}
	cout << a[x][y] << "\n";
	
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}