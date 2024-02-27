#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n, k;
	cin >> n >> k;
	int a[n+5];
	for (int i=0;i<n;i++) cin >> a[i];
	sort(a, a+n);
	cout << a[k];
}
 