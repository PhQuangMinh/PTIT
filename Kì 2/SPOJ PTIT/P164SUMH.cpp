#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    int sum=0;
    int i=0;
    int t=0;
    while (sum<=n){
    	i++;
    	t+=i;
    	sum+=t;
	}
	cout << --i;
}