#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n, x; 
    cin >> n >> x;
    int dem=0;
    for (int i=1;i<=sqrt(x);i++)
        if (x%i==0){
        	int t=x/i;
        	if (i<=n && t<=n) 
			    if (i*i==x) dem++;
			    else dem+=2;
		}
	cout << dem;
}