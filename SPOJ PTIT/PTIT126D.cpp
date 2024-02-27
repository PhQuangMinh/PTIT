#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	while (n!=0){
		int a[n+5];
		for (int i=1;i<=n;i++) cin >> a[i];
		for (int i=1;i<=n;i++){
			if (i==1)
			    for (int j=1;j<=a[i];j++) cout << "1 ";
			else
			    if (a[i]>a[i-1]){
			    	for (int j=1;j<=a[i]-a[i-1];j++)
			    	   cout << i << " ";
				}
		}
		cout << "\n";
		cin >> n;
	}
}
 