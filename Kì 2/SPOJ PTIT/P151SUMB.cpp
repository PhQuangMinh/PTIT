#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    for (int i=n/5;i>=0;i--){
    	int t=i*5;
    	if ((n-t)%3==0){
    		cout << i+(n-t)/3;
    		return 0;
		}
	}
	cout << "-1";
}