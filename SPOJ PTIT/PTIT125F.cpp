#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int min1 = 50001;
	int min2 = 50002;
	long long sum1=0;
	long long sum2=0;
	for (int i=1;i<=n;i++){
		int a, b;
		cin >> a >> b;
		sum1+=a;min1=min(a,min1);
		sum2+=b;min2=min(b,min2);
		
	}
	sum1+=min2;
	sum2+=min1;
	int res=max(sum1,sum2);
	cout << res;
}