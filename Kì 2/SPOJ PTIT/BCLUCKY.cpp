#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dem[1000005];
int main(){
	faster();
	int n, x;
	cin >> n >> x;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1);
	int dmax=1000005, max;
	long long loinhuan=(long long)n*x;
	int d=1;
	a[n+1]=-1;
	for (int i=1;i<=n;i++){
		if (a[i]==a[i+1]) d++;
		else{
			if (d<=dmax){
				dmax=d;
				max=a[i];
			}
			d=1;
		}
	}
//	cout << dmax << " " << max << "\n"; 
	loinhuan-=(long long)dmax*max;
	cout << loinhuan;
}