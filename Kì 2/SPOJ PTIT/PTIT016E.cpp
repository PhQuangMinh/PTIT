#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5][20];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=11;j++)
	        cin >> a[i][j];
	long long ans=0;
    for (int i=1;i<=n-2;i++)
        for (int j=i+1;j<=n-1;j++)
            for (int k=j+1;k<=n;k++){
            	long long sum=0;
            	for (int i1=1;i1<=11;i1++){
            		int t=max(a[i][i1], a[j][i1]);
            		sum+=max(t, a[k][i1]);
				}
				ans=max(sum, ans);
			}
	cout << ans;
}