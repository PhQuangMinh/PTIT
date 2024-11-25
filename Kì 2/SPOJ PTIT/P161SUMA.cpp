#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long dem=0;
void solve(long long a, long long b){
	if (a>b){
		dem+=a/b;
		if (a%b!=0) solve(a%b, b);
		else return;
	}
	else
	    if (a<b){
		    dem+=b/a;
		    if (b%a!=0) solve(a, b%a);
		    else return;
	    }
	return;	
}
int main(){
	faster();
    long long a, b;
    cin >> a >> b;
    solve(a, b);
    cout << dem;
}