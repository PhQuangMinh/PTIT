#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int dem=0;
    for (int i=0;i<n/2;i++)
        if (s[i]!=s[n-i-1]) dem++;
    if (m>n){
    	cout << "No";
    	return 0;
	}
	if (m==n){
		cout << "Yes";
		return 0;
	}
    if (m<dem){
    	cout << "No";
    	return 0;
	}
	m-=dem;
	if (m%2==0) cout << "Yes";
	else cout << "No";
} 