#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    int dem=0;
    int sum=0;
    int t=0;
    while (sum<=n){
    	dem++;
    	t+=dem;
    	sum+=t;
	}
	cout << dem-1;
}