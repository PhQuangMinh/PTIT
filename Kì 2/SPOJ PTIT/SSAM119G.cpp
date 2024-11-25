#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
void solve(){
	int n, m;
	cin >> n >> m;
	int a[n+5], d[10005]={0};
	d[0]=1;
	sort(a+1, a+n+1, cmp);
	int res=-1;
	for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++)
        for (int j=m;j>=a[i];j--){
        	if (d[j]==1 || d[j-a[i]]==1) 
        	    d[j]=1;
        	else d[j]=0;
		}
    if (d[m]) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 