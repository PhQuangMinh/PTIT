#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int a[m+5];
	for (int i=1;i<=m;i++) cin >> a[i];
	sort(a+1, a+m+1, cmp);
	int res=mod;
	for (int i=1;i<=m-n+1;i++)
	    res=min(res, a[i+n-1]-a[i]);
	cout << res;
} 