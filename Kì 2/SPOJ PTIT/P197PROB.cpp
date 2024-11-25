#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	long long m, k;
	cin >> m >> k;
	if (m<=k){
		cout << m;
		return;
	}
    long long thuong=m/k;
    long long can=sqrt(2*thuong);
    if (can*(can+1)>2*thuong) can--;
    long long res=can*k;
    m=m-can*(can+1)*k/2;
    res+=m/(can+1);
    cout << res;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 