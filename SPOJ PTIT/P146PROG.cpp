#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[100005];
	a[0]=0;
	for (int i=1;i<=n;i++) cin >> a[i];
	if (n==1){
		cout << "1 0";
		return 0;
	}
	int teo=1, ti=1;
	int i=1;
	int sumti=a[1];
	int sumteo=a[n];
	while (i<n-1){
		if (sumti<=sumteo){
			ti++;
			i++;
			sumti+=a[i];
		}
		else{
			teo++;
			n--;
			sumteo+=a[n];
		}
	}
	cout << ti << " " << teo;
}