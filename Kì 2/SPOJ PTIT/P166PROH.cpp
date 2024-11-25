#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int check(int n){
	int dem=0;
	for (int i=2;i<=sqrt(n);i++)
	    if (n%i==0){
	    	dem++;
	    	while (n%i==0) n/=i;
		}
	if (n>1) dem++;
	if (dem==2) return 1;
	return 0;
}
int main(){
	faster();
    int n; 
    cin >> n;
    int dem=0;
    for (int i=2;i<=n;i++)
        if (check(i)) dem++;
    cout << dem;
}