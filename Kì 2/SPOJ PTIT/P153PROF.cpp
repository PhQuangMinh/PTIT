#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
	int n;
	cin >> n;
    int a[n+5], b[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n;i++) cin >> b[i];
    sort(a+1, a+n+1, cmp);
    sort(b+1, b+n+1, cmp);
    int ans=0;
    int i=1, j=1;
    while (i<=n){
    	if (b[i]>a[j]){
    		ans++;
    		i++;j++;
		}
		else i++;
	}
	cout << ans;
}