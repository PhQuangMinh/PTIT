#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long f[100];
int fi(long long n){
	f[0]=3;
	f[1]=10;
	for (int i=2;i<=50;i++){
		f[i]=2*f[i-1]+i+3;
		if (f[i]>n) return i;
	}
}
char qd(long long n, int t){
	if (t==0){
		if (n==1) return 'm';
		return 'o';
	}
	if (n<=f[t-1]) return qd(n, t-1);
	else
	    if (n>f[t-1]+t+3) return qd(n-f[t-1]-t-3, t-1);
	    else if (n==f[t-1]+1) return 'm';
	        else return 'o';
}
int main(){
	faster();
	long long n;
	cin >> n;
	int t=fi(n);
	cout << qd(n, t);
//	for (int i=0;i<=t;i++) cout << f[i] << "\n";
}