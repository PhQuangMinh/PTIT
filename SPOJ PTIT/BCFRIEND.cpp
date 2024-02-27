#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int tknp(int l, int r, int a[], int x){
	while (r>=l){
		int k=(l+r)/2;
		if (x>a[k]) l=k+1;
		else 
		    if (x<a[k]) r=k-1;
			else return k; 
	}
	return -1;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1);
	int count=0;
	for (int i=1;i<n;i++){
		int t=tknp(i+1, n, a, m-a[i]);
		if (t!=-1){
			int dem=0;
			int d=t;
			while (a[d]==m-a[i] && d<=n) d++;
			count+=(d-t);
			d=t;
			while (a[d]==m-a[i] && d>i) d--;
			count+=t-d-1;
		}
	}
	cout << count;
}