#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int tcs(int x){
	int sum=0;
	while (x!=0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int main(){
	faster();
	int n;
	cin >> n;
	int tcsn=tcs(n);
	int sum=0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			while (n%i==0){
				sum+=tcs(i);
				n/=i;
			}
		}
	}
	if (n>1) sum+=tcs(n);
	if (sum==tcsn) cout << "YES";
	else cout << "NO";
}