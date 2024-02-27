#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
void solve(int test){
	int n;
	cin >> n;
	long long a[n+5], b[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int j=1;j<=n;j++) cin >> b[j];
	sort(a+1, a+n+1, cmp);
	sort(b+1, b+n+1, cmp);
	int i=1, j=n;
	long long res=0;
	while (i<=j){
		if (i==j) res+=a[i]*b[i];
		else res+=a[i]*b[j]+a[j]*b[i];
		i++;j--;
	}
	cout << "Case #" << test << ": " << res;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve(i);
	    if (i!=n) cout << "\n";
	}
} 