#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int luu[1000];
void kq(float a[], int n, int k){
	if (k>n){
		for (int i=1;i<=n;i++) cout << a[i] << " ";
		cout << "\n";
	}
	else{
		int d=0;
		for (int i=1;i<=k/2;i++){
		    luu[++d]=(a[i]+a[i+k/2])/2;
		    luu[++d]=(a[i]-a[i+k/2])/2;
	    }
	    for (int i=1;i<=k;i++) a[i]=luu[i];
	    kq(a, n, k*2);
	}
}
int main(){
	faster();
	int n;
	cin >> n;
	while (n!=0){
		float a[10000];
		for (int i=1;i<=n;i++) cin >> a[i];
		kq(a, n, 2);
		cin >> n;
	}
}