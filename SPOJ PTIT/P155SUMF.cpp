#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	long long sum=0;
	for (int i=1;i<=n;i++){
		long long x;
		cin >> x;
		long long t=x*i-sum;
		sum+=t;
		cout << t << " ";
		
	}
}
 