#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	if (r1<l2 || r2<l1){
		cout << 0;
		return 0;
	}
	long long res;
	long long cuoi=min(r1, r2);
	if (l1<=l2){
		res=cuoi-l2+1;
		if (k>=l2 && k<=cuoi) res--;
	}
	else{
		res=cuoi-l1+1;
		if (k>=l1 && k<=cuoi) res--;
	}
	cout << res;
} 