#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=2;i<=sqrt(n);i++)
	    if(n%i==0){
	        int dem=0;
	        while (n%i==0){
	        	n/=i;
	        	dem++;
			}
			cout << i << " " << dem << "\n";
	    }
	if (n>1) cout << n << " 1";
}
 