#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	long long n, m;
	cin >> n >> m;
	long long j;
	cin >> j;
	long long a[j+5];
	for (long long i=1;i<=j;i++) cin >> a[i];
	long long sum=0;
	long long dau=1;
	long long cuoi=m;
	for (long long i=1;i<=j;i++){
		if (a[i]>=dau && a[i]<=cuoi) continue;
		else{
	    long long tinh=min(abs(a[i]-dau), abs(a[i]-cuoi));
	    sum+=tinh;
	    if (a[i]<dau){
	    	dau=dau-tinh;
	    	cuoi=cuoi-tinh;
		}
		else
		    if (a[i]>cuoi){
		    	dau=dau+tinh;
		    	cuoi=cuoi+tinh;
			}
		}
	}
	cout << sum;
} 