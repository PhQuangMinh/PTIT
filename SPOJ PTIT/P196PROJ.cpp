#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long tong(int a[], int n){
	long long res=0;
	long long sum=0;
	for (int i=1;i<=n;i++){
		sum+=a[i];
		if (a[i]>sum) sum=a[i];
		res=max(sum, res);
	}
	return res;
}
int main(){
	faster();
	int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    long long res=tong(a, n);
    for (int i=1;i<=n;i++) a[i]=-a[i];
    res=max(res, tong(a, n));
    cout << res;
} 