#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
long long uoc(long long n){
	long long max=1;
	for (int i=2;i<=sqrt(n);i++)
	    if (n%i==0){
	    	while (n%i==0) n/=i;
			if (i>max) max=i;  
		}
	if (n>1) max=n;
	return max;
}
int main(){
	faster();
	int n;
	cin >> n;
    for (int i=1;i<=n;i++){
    	long long x;
    	cin >> x;
    	cout << uoc(x) << "\n";
	}
}
 