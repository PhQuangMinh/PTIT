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
    int d[40005];
    d[0]=1;
    for (int i=1;i<=n;i++)
        for (int j=m;j>=a[i];j--){
        	if (d[j-a[i]]) d[j]=1;
		}
    if (d[m]) cout << "YES";
    else cout << "NO";
}
 