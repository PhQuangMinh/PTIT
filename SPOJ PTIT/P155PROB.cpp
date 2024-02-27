#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int x, s;
	cin >> x >> s;
	int cre=x*s;
	for (int i=1;i<=5;i++){
		int n;
		cin >> n;
		cout << n-cre << " ";
	}
}
 