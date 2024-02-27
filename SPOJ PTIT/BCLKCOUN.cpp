#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
char a[105][105];
void dq(int i, int j){
	a[i][j]='.';
	if (a[i-1][j-1]=='W'){
		a[i-1][j-1]='.';
		dq(i-1, j-1);
	}
		if (a[i-1][j]=='W'){
		a[i-1][j]='.';
		dq(i-1, j);
	}
		if (a[i-1][j+1]=='W'){
		a[i-1][j+1]='.';
		dq(i-1, j+1);
	}
		if (a[i][j-1]=='W'){
		a[i][j-1]='.';
		dq(i, j-1);
	}
		if (a[i][j+1]=='W'){
		a[i][j+1]='.';
		dq(i, j+1);
	}
		if (a[i+1][j-1]=='W'){
		a[i+1][j-1]='.';
		dq(i+1, j-1);
	}
		if (a[i+1][j]=='W'){
		a[i+1][j]='.';
		dq(i+1, j);
	}
		if (a[i+1][j+1]=='W'){
		a[i+1][j+1]='.';
		dq(i+1, j+1);
	}
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	for (int i=0;i<=n+1;i++)
	    for (int j=0;j<=m+1;j++)
	        if (i==0 || i==n+1 || j==0 || j==m+1) a[i][j]='.';
	        else cin >> a[i][j];
	int dem=0;
//	for (int i=0;i<=n+1;i++){
//	    for (int j=0;j<=m+1;j++) cout << a[i][j];
//	    cout << "\n";
//	}
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
	        if (a[i][j]=='W'){
	        	dem++;
	        	dq(i, j);
			}
	cout << dem;
}