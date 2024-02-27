#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
char a[1000][1000];
void dq(int i, int j){
	if (a[i][j]=='#') a[i][j]='.';
	if (a[i][j-1]=='#'){
		a[i][j-1]='.';
		dq(i, j-1);
	}
	if (a[i][j+1]=='#'){
		a[i][j+1]='.';
		dq(i, j+1);
	}
	if (a[i-1][j]=='#'){
		a[i-1][j]='.';
		dq(i-1, j);
	}
	if (a[i+1][j]=='#'){
		a[i+1][j]='.';
		dq(i+1, j);
	}
}
//void in(int n, int m){
//	for (int i=1;i<=n;i++){
//		for (int j=1;j<=m;j++)
//		    cout << a[i][j];
//		cout << "\n";
//	}
//}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	for (int i=0;i<=n+1;i++)
	    for (int j=0;j<=m+1;j++){
	    	if (i==0 || i==n+1 || j==0 || j==m+1) a[i][j]='.';
	    	else cin >> a[i][j];
		}
	long long dem=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++)
		    if (a[i][j]=='#'){
		    	dem++;
		    	dq(i, j);
//		    	in(n, m);
			}
//		cout << dem << "\n";
	}
	cout << dem;
} 