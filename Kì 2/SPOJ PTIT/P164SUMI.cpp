#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n, k; 
    cin >> n >> k;
    int a[n+5];
    int dem=0;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++)
        if (a[i]>0 && a[i]>=a[k]) dem++;
    cout << dem;
}