#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int tknp(int x, int l, int r, int a[]){
	int res;
	if (x<a[l]) return 0;
	while (l<=r){
		int t=(l+r)/2;
		if (a[t]>x) r=t-1;
		else{
			l=t+1;
			res=t;
		}
	}
	return res;
}
int main(){
	faster();
    int n, m;
    cin >> n >> m;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1, cmp);
    int dem=0;
    int b[m+5];
    for (int i=1;i<=m;i++){
    	int x;
    	cin >> x;
    	cout << tknp(x, 1, n, a) << "\n";
    }
}