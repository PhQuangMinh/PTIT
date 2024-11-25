#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void uoc(long long n){
	for (int i=2;i<=sqrt(n);i++)
	    if (n%i==0){
	    	while (n%i==0){
			    n/=i;
			    cout << i << " ";
			}
		}
	if (n>1) cout << n;
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
    for (int i=1;i<=n;i++){
    	long long x;
    	cin >> x;
    	uoc(x);
	}
}
 