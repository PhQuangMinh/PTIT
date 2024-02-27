#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    int sum=0;
    for (int i=1;i<=5;i++){
    	cin >> n;
    	sum+=n;
	}
	if (sum%5==0 && sum>=5) cout << sum/5;
	else cout << -1;
}