#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n, t, b;
	cin >> n >> t >> b;
	int test=1;
	while (1){
		if (n==0 && t==0 && b==0) break;
		int res=0;
		t=t%n;
		for (int i=1;i*i<=b;i++){
			if (b%i==0){
				int uoc=b/i;
				if (uoc<=t) res++;
				if (i<=t) res++;
				if ((long long)i*i==b && i<=t) res--;
			}
		}
		cout << "Case " << test << ": ";
		if (res%2==0) cout << "Off\n";
		else cout << "On\n";
		test++;
		cin >> n >> t >> b;
		
	}
} 