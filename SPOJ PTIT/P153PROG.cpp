#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    long long n, k;
    cin >> n >> k;
    long long dc, dl;
    if (n%2==1) dl=(n-1)/2+1;
	else dl=(n-2)/2+1;
	dc=n-dl;
	if (k<=dl){
		cout << 1 + (k-1)*2;
	}
	else{
		k-=dl;
		cout << k*2;
	}
}
 