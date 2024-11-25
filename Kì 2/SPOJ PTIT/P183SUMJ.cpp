#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n, m; 
    cin >> n >> m;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int b[m+5];
    for (int j=1;j<=m;j++) cin >> b[j];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
           if (a[i]==b[j]){
           	cout << a[i] << " ";
           	break;
		   }
}