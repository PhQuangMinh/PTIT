#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int check(int n, int a[]){
	for (int i=1;i<n;i++)
	    if (a[i]!=a[i+1]) return 0;
	return 1;
}
int main(){
	int n;
	cin >> n;
	int test=1;
	while (n!=0){
		int a[n+5];
		for (int i=1;i<=n;i++) cin >> a[i];
		cout << "Case " << test << ": ";
		int d=0;
		while (check(n, a)==0){
			int x=a[1];
			for (int i=1;i<=n-1;i++)
			    a[i]=abs(a[i]-a[i+1]);
			a[n]=abs(a[n]-x);
			d++;
			if (d>1000) break;
		}
		if (d>1000) cout << "not attained\n";
		else cout << d << " iterations\n";
		cin >> n;
		test++;
	}
	
}