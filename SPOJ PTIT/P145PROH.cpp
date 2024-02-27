#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long bc(long long a, long long b){
    long long bc=a*b;
    long long t=b%a;
    while (t!=0){
    	t=a%b;
    	a=b;
    	b=t;
	}
	bc=bc/a;
	return bc;
}
int main(){
	faster();
	int n;
	cin >> n;
	if (n<=2) cout << n;
	else if (n==3) cout << 6;
	else if (n==4) cout << 12;
	else if (n==5) cout << 60;
	else{
		long long kq=0;
		for (int i=n-5;i<=n-2;i++)
		    for (int j=i+1;j<=n-1;j++)
		        for (int k=j+1;k<=n;k++){
		        	long long t=bc(bc(i, j), k);
		        	if (t>kq) kq=t;
				}
		cout << kq;
	}
}
 