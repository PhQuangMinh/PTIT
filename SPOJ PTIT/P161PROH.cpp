#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    int check[3005]={0};
    for (int i=1;i<=n;i++){
    	int x;
    	cin >> x;
    	check[x]=1;
	}
	for (int i=1;i<=n+1;i++)
	    if (check[i]==0){
	    	cout << i;
	    	return 0;
		}
	cout << n+1;
}