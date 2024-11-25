#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	while (n>=10){
		int t=0;
	    while (n!=0){
		    t+=n%10;
		    n/=10;
	    }
	    n=t;
    }
    cout << n << "\n";
}
int main(){
	int n;
    cin >> n;
	for (int i=1;i<=n;i++) solve();
} 