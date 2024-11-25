#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int mi=min(n, m);
	if (mi%2==0) cout << "Wilshere";
	else cout << "Xavi";
} 