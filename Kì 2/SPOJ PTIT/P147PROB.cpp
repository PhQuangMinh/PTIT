#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    int sum=0;
    for (int i=1;i<=n;i++){
    	int x;
    	cin >> x;
    	sum+=x;
	}
	cout << fixed << setprecision(12) << (double)sum/n; 
} 