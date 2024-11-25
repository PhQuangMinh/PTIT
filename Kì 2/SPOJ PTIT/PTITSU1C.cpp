#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n, m;
    cin >> n >> m;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int max=0;
    for (int i=1;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            for (int k=j+1;k<=n;k++)
                if (a[i]+a[j]+a[k]>max && a[i]+a[j]+a[k]<=m)
                    max=a[i]+a[j]+a[k];
    cout << max << "\n";	
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 