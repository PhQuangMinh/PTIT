#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    while (n!=0){
    	int d=1;
    	while (n!=1){
    		if (n%2==0) n/=2;
    		else n=n*3+1;
    		d++;
		}
		cout << d << "\n";
		cin >> n;
	}
} 