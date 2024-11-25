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
	int n, s;
	cin >> n >> s;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1, cmp);
	int res=0;
	for (int i=n;i>=1;i--){
		res+=s/a[i];
		s=s%a[i];
	}
	cout << res;
} 