#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int duoi(long long x, int n, int a[]){
	int l=1, r=n;
	int res;
	while (l<=r){
		int t=(l+r)/2;
		if (x>=a[t]){
			res=t;
			l=t+1;
		}
		else r=t-1;
	}
	while (res>1 && a[res]>=x) res--;
	res++;
	return res;
}
int tren(long long x, int n, int a[]){
	int l=1, r=n;
	int res;
	while (l<=r){
		int t=(l+r)/2;
		if (x<=a[t]){
			res=t;
			r=t-1;
		}
		else l=t+1;
	}
	while (res < n && a[res]<=x) res++;
	res--;
	return res;
}
int main(){
	faster();
	int n, q;
	cin >> n >> q;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	a[n+1]=mod+15;
	sort(a+1, a+n+1, cmp);
	for (int i=1;i<=q;i++){
		long long l, r;
		cin >> l >> r;
		if (r<a[1] || l>a[n]) cout << "0\n";
		else{
			if (l<=a[1]) l=1;
			else l=duoi(l, n, a);
			if (r>=a[n]) r=n;
			else r=tren(r, n, a);
			cout << r-l+1 << "\n";
		}
	}
}