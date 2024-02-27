#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
    int a[n+5];
    long long sum=0;
    long long res=0;
    for (int i=1;i<=n;i++){
    	cin >> a[i];
    	sum+=a[i];
	}
	for (int i=1;i<=n;i++)
	    res+=a[i]*(sum-a[i]);
	res/=2;
	cout << res;
} 