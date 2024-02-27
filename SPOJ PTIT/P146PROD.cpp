#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    int dem=0;
    for (int i=1;i<=n;i++){
    	int a, b, c;
    	int d=0;
    	cin >> a >> b >> c;
    	if (a==1) d++;
    	if (b==1) d++;
    	if (c==1) d++;
    	if (d>=2) dem++;
	}
	cout << dem;
} 