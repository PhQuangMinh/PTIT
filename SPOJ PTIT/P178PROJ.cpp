#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
	int n;
	cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> hd;
	for (int i=1;i<=n;i++){
		ll x;
		cin >> x;
		hd.push(x);
	}
	long long res=0;
	while (hd.size()>1){
		ll x=hd.top();
		hd.pop();
		ll y=hd.top();
		hd.pop();
		ll len=(x+y)%mod;
		res+=len;
		hd.push(len);
		res%=mod;
	}
	cout << res;
} 