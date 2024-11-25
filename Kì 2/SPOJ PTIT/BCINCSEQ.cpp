#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int max=0, dem=1;
	for (int i=2;i<=n;i++)
	    if (a[i]>=a[i-1]) dem++;
	    else{
	    	if (dem>max) max=dem;
	    	dem=1;
		}
	if (dem>max) max=dem;
	cout << max;
} 