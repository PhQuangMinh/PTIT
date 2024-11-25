#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    long long res=a[1];
    long long sum=a[1];
    for (int i=2;i<=n;i++){
    	sum+=a[i];
    	if (a[i]>sum) sum=a[i];
    	res=max(sum, res);
	}
	cout << res;
} 