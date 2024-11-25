#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    while (n!=0){
    	int dem=1;
    	while (n!=1){
    		if (n%2==0) n/=2;
    		else n=n*3+1;
    		dem++;
		}
		cout << dem << "\n";
		cin >> n;
	}
}