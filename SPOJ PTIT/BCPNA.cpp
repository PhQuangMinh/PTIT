#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return 1;
}
void solve(){
	int n;
	cin >> n;
	int d=0;
	if (snt(n)==1) d++;
	int sum;
	for (int i=2; i<=n/2; i++){
		sum=0;
		if (snt(i)==1)
			for (int j=i; j<=n; j++)
				if (snt(j)==1){
					sum+=j;
					if (sum==n) d++;
					if (sum>n) break;
				}
	}
	cout << d << endl;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 