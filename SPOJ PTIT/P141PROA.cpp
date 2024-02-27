#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int k;
	cin >> k;
	int n;
	cin >> n;
	int ans=k;
	int time=210;
	int sum=0;
	for (int i=1;i<=n;i++){
		int t;
		char rep;
		cin >> t >> rep;
		sum+=t;
		if (sum<time){
			if (rep=='T'){
				ans++;
				if (ans>8) ans-=8;
			}
		}
		else{
			break;
		}
	}
	cout << ans;
}