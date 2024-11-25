#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    while (n!=0){
    	int a[n*6+5], x;
    	int check[50]={0};
    	for (int i=1;i<=n;i++) 
		    for (int j=1;j<=6;j++){
		    	cin >> x;
		    	check[x]++;
			}
		int ok=1;
		for (int i=1;i<=49;i++)
		    if (check[i]==0) ok=0;
		if (ok) cout << "Yes\n";
		else cout << "No\n";
		cin >> n;
	}
} 